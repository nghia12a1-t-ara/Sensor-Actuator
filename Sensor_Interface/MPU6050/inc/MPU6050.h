/*
 * MPU6050_res_define.h
 *
 * Created: 04/21/2020 22:47:10
 *  Author: Nghia
 */

#ifndef __MPU6050_H__
#define __MPU6050_H__

/*
 * Define Struct Data Types to Save Sensor Data
 */
typedef struct MPU6050_DataTypes
{ 
	float Acc_x;
	float Acc_y;
	float Acc_z;
	float Temperature;
	float Gyro_x;
	float Gyro_y;
	float Gyro_z;
} MPU6050_DataTypes;

/* MPU6050 API Prototypes */

/* Gyro initialization function */
void MPU6050_Init(MPU6050_DataTypes * pMPUData);

/*
 * MPU6050_ReadRawValue
 *
 * Detail	Read Sensor Raw Data
 * Param	pMPUData - Pointer to MPU6050 Struct Datas
 * Reval	void
 */
void MPU6050_ReadRawValue(MPU6050_DataTypes * pMPUData);

/*
 * MPU6050_ConvertToRealValue
 *
 * Detail	Convert Sensor RawData to Real Values
 * Param	pMPUData - Pointer to MPU6050 Struct Datas
 * Reval	void
 */
void MPU6050_ConvertToRealValue(MPU6050_DataTypes * pMPUData);

#endif	/* __MPU6050_H__ */
