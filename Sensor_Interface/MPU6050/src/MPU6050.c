/*
 * MPU6050_res_define.h
 *
 * Created: 04/21/2020 22:47:10
 *  Author: Nghia
 */

/* Include MPU6050 register define file */
#include "MPU6050.h"
#include "MPU6050_res_define.h"
#include "MPU6050_I2C_SpecificConfig.h"

static void MPU6050_StartLocation(void);

/* Gyro initialization function */
void MPU6050_Init(MPU6050_DataTypes * pMPUData)
{
	/* Power up time >100ms */
	_delay_ms(150);
	/* Start with device write address */
	I2C_MPU6050_Start_Wait(I2C_MPU6050_WRITE_ADDRESS);
	/* Write to sample rate register */
	I2C_MPU6050_Write(SMPLRT_DIV);
	/* 1KHz sample rate */
	I2C_MPU6050_Write(0x07);
	I2C_MPU6050_Stop();

	I2C_MPU6050_Start_Wait(I2C_MPU6050_WRITE_ADDRESS);
	/* Write to power management register */
	I2C_MPU6050_Write(PWR_MGMT_1);
	/* X axis gyroscope reference frequency */
	I2C_MPU6050_Write(0x01);
	I2C_MPU6050_Stop();

	I2C_MPU6050_Start_Wait(I2C_MPU6050_WRITE_ADDRESS);
	
	/* Write to Configuration register */
	I2C_MPU6050_Write(CONFIG);
	/* Fs = 8KHz */
	I2C_MPU6050_Write(0x00);
	I2C_MPU6050_Stop();

	I2C_MPU6050_Start_Wait(I2C_MPU6050_WRITE_ADDRESS);
	/* Write to Gyro configuration register */
	I2C_MPU6050_Write(GYRO_CONFIG);
	/* Full scale range +/- 2000 degree/C */
	I2C_MPU6050_Write(0x18);
	I2C_MPU6050_Stop();

	I2C_MPU6050_Start_Wait(I2C_MPU6050_WRITE_ADDRESS);
	/* Write to interrupt enable register */
	I2C_MPU6050_Write(INT_ENABLE);
	I2C_MPU6050_Write(0x01);
	I2C_MPU6050_Stop();
	
	/* Reset MPU Data */
	pMPUData->Acc_x = 0.0;
	pMPUData->Acc_y = 0.0;
	pMPUData->Acc_z = 0.0;
	pMPUData->Temperature = 0.0;
	pMPUData->Gyro_x = 0.0;
	pMPUData->Gyro_y = 0.0;
	pMPUData->Gyro_z = 0.0;
}

/*
 * MPU6050_ReadRawValue
 *
 * Detail	Read Sensor Raw Data
 * Param	pMPUData - Pointer to MPU6050 Struct Datas
 * Reval	void
 */
void MPU6050_ReadRawValue(MPU6050_DataTypes * pMPUData)
{
	MPU6050_StartLocation();
	
	/* Read Accelometer Values */
	pMPUData->Acc_x = (((uint32)I2C_MPU6050_Read_Ack() << 8) | (uint32)I2C_MPU6050_Read_Ack());
	pMPUData->Acc_y = (((uint32)I2C_MPU6050_Read_Ack() << 8) | (uint32)I2C_MPU6050_Read_Ack());
	pMPUData->Acc_z = (((uint32)I2C_MPU6050_Read_Ack() << 8) | (uint32)I2C_MPU6050_Read_Ack());
	
	/* Read Temperature Value */
	pMPUData->Temperature = (((int)I2C_MPU6050_Read_Ack()<<8) | (int)I2C_MPU6050_Read_Ack());
	
	/* Read Gyro values */
	pMPUData->Gyro_x = (((int)I2C_MPU6050_Read_Ack()<<8) | (int)I2C_MPU6050_Read_Ack());
	pMPUData->Gyro_y = (((int)I2C_MPU6050_Read_Ack()<<8) | (int)I2C_MPU6050_Read_Ack());
	pMPUData->Gyro_z = (((int)I2C_MPU6050_Read_Ack()<<8) | (int)I2C_MPU6050_Read_Nack());
	
	I2C_MPU6050_Stop();
}

/*
 * MPU6050_ConvertToRealValue
 *
 * Detail	Convert Sensor RawData to Real Values
 * Param	pMPUData - Pointer to MPU6050 Struct Datas
 * Reval	void
 */
void MPU6050_ConvertToRealValue(MPU6050_DataTypes * pMPUData)
{
	/* Divide raw value by sensitivity scale factor to get real values */
	pMPUData->Acc_x = pMPUData->Acc_x/16384.0;
	pMPUData->Acc_y = pMPUData->Acc_y/16384.0;
	pMPUData->Acc_z = pMPUData->Acc_z/16384.0;
	
	pMPUData->Gyro_x = pMPUData->Gyro_x/16.4;
	pMPUData->Gyro_y = pMPUData->Gyro_y/16.4;
	pMPUData->Gyro_z = pMPUData->Gyro_z/16.4;

	/* Convert temperature in °/c using formula */
	pMPUData->Temperature = (pMPUData->Temperature/340.00)+36.53;
}

/*
 * MPU6050_StartLocation
 *
 * Detail	Start location address from where to read 
 * Param	void
 * Reval	void
 */
static void MPU6050_StartLocation()
{
	/* I2C start with device write address */
	I2C_MPU6050_Start_Wait(I2C_MPU6050_WRITE_ADDRESS);
	/* Write start location address from where to read */
	I2C_MPU6050_Write(ACCEL_XOUT_H);
	/* I2C start with device read address */
	I2C_MPU6050_Repeated_Start(I2C_MPU6050_READ_ADDRESS);
}
