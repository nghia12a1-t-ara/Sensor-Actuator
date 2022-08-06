 * MPU6050_res_define.h
 *
 * Created: 04/21/2020 22:47:10
 *  Author: Nghia
 */

#ifndef __MPU6050_I2C_SPECIFIC_CONFIG_H__
#define __MPU6050_I2C_SPECIFIC_CONFIG_H__

#define I2C_MPU6050_WRITE_ADDRESS			0xD0
#define I2C_MPU6050_READ_ADDRESS			(I2C_MPU6050_WRITE_ADDRESS+1)

#define I2C_MPU6050_Read_Ack				I2C_Read_Ack
#define I2C_MPU6050_Read_Nack				I2C_Read_Nack
#define I2C_MPU6050_Start_Wait				I2C_Start_Wait
#define I2C_MPU6050_Write					I2C_Write
#define I2C_MPU6050_Repeated_Start			I2C_Repeated_Start
#define I2C_MPU6050_Stop					I2C_Stop

#endif	/* __MPU6050_I2C_SPECIFIC_CONFIG_H__ */
