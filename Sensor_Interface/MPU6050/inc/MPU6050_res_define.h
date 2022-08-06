/*
 * MPU6050_res_define.h
 *
 * Created: 04/21/2020 22:47:10
 *  Author: Nghia
 */ 


#ifndef __MPU6050_RES_DEFINE_H__
#define __MPU6050_RES_DEFINE_H__

/*
 * Define Register of MPU6050
 */
#define XG_OFFS_TC 				(00UL)
#define YG_OFFS_TC 				(01UL)
#define ZG_OFFS_TC 				(02UL)
#define X_FINE_GAIN 			(03UL)
#define Y_FINE_GAIN 			(04UL)
#define Z_FINE_GAIN 			(05UL)
#define XA_OFFS_H 				(06UL) 
#define XA_OFFS_L_TC 			(07UL)
#define YA_OFFS_H 				(08UL) 
#define YA_OFFS_L_TC 			(09UL)
#define ZA_OFFS_H 				(0AUL) 
#define ZA_OFFS_L_TC 			(0BUL)
#define XG_OFFS_USRH 			(13UL)
#define XG_OFFS_USRL 			(14UL)
#define YG_OFFS_USRH 			(15UL)
#define YG_OFFS_USRL 			(16UL)
#define ZG_OFFS_USRH 			(17UL)
#define ZG_OFFS_USRL 			(18UL)
#define SMPLRT_DIV 				(19UL)
#define CONFIG 					(1AUL)
#define GYRO_CONFIG 			(1BUL)
#define ACCEL_CONFIG 			(1CUL)
#define FF_THR 					(1DUL)
#define FF_DUR 					(1EUL)
#define MOT_THR 				(1FUL)
#define MOT_DUR 				(20UL)
#define ZRMOT_THR 				(21UL)
#define ZRMOT_DUR 				(22UL)
#define FIFO_EN 				(23UL)
#define I2C_MST_CTRL 			(24UL)
#define I2C_SLV0_ADDR 			(25UL)
#define I2C_SLV0_REG 			(26UL)
#define I2C_SLV0_CTRL 			(27UL)
#define I2C_SLV1_ADDR 			(28UL)
#define I2C_SLV1_REG 			(29UL)
#define I2C_SLV1_CTRL 			(2AUL)
#define I2C_SLV2_ADDR 			(2BUL)
#define I2C_SLV2_REG 			(2CUL)
#define I2C_SLV2_CTRL 			(2DUL)
#define I2C_SLV3_ADDR 			(2EUL)
#define I2C_SLV3_REG 			(2FUL)
#define I2C_SLV3_CTRL 			(30UL)
#define I2C_SLV4_ADDR 			(31UL)
#define I2C_SLV4_REG 			(32UL)
#define I2C_SLV4_DO 			(33UL)
#define I2C_SLV4_CTRL 			(34UL)
#define I2C_SLV4_DI 			(35UL)
#define I2C_MST_STATUS 			(36UL)
#define INT_PIN_CFG 			(37UL)
#define INT_ENABLE 				(38UL)
#define DMP_INT_STATUS 			(39UL)
#define INT_STATUS 				(3AUL)
#define ACCEL_XOUT_H 			(3BUL)
#define ACCEL_XOUT_L 			(3CUL)
#define ACCEL_YOUT_H 			(3DUL)
#define ACCEL_YOUT_L 			(3EUL)
#define ACCEL_ZOUT_H 			(3FUL)
#define ACCEL_ZOUT_L 			(40UL)
#define TEMP_OUT_H 				(41UL)
#define TEMP_OUT_L 				(42UL)
#define GYRO_XOUT_H 			(43UL)
#define GYRO_XOUT_L 			(44UL)
#define GYRO_YOUT_H 			(45UL)
#define GYRO_YOUT_L 			(46UL)
#define GYRO_ZOUT_H 			(47UL)
#define GYRO_ZOUT_L 			(48UL)
#define EXT_SENS_DATA_00 		(49UL)
#define EXT_SENS_DATA_01 		(4AUL)
#define EXT_SENS_DATA_02 		(4BUL)
#define EXT_SENS_DATA_03 		(4CUL)
#define EXT_SENS_DATA_04 		(4DUL)
#define EXT_SENS_DATA_05 		(4EUL)
#define EXT_SENS_DATA_06 		(4FUL)
#define EXT_SENS_DATA_07 		(50UL)
#define EXT_SENS_DATA_08 		(51UL)
#define EXT_SENS_DATA_09 		(52UL)
#define EXT_SENS_DATA_10 		(53UL)
#define EXT_SENS_DATA_11 		(54UL)
#define EXT_SENS_DATA_12 		(55UL)
#define EXT_SENS_DATA_13 		(56UL)
#define EXT_SENS_DATA_14 		(57UL)
#define EXT_SENS_DATA_15 		(58UL)
#define EXT_SENS_DATA_16 		(59UL)
#define EXT_SENS_DATA_17 		(5AUL)
#define EXT_SENS_DATA_18 		(5BUL)
#define EXT_SENS_DATA_19 		(5CUL)
#define EXT_SENS_DATA_20 		(5DUL)
#define EXT_SENS_DATA_21 		(5EUL)
#define EXT_SENS_DATA_22 		(5FUL)
#define EXT_SENS_DATA_23 		(60UL)
#define MOT_DETECT_STATUS 		(61UL)
#define I2C_SLV0_DO 			(63UL)
#define I2C_SLV1_DO 			(64UL)
#define I2C_SLV2_DO 			(65UL)
#define I2C_SLV3_DO 			(66UL)
#define I2C_MST_DELAY_CTRL 		(67UL)
#define SIGNAL_PATH_RESET 		(68UL)
#define MOT_DETECT_CTRL 		(69UL)
#define USER_CTRL 				(6AUL)
#define PWR_MGMT_1 				(6BUL)
#define PWR_MGMT_2 				(6CUL)
#define BANK_SEL 				(6DUL)
#define MEM_START_ADDR 			(6EUL)
#define MEM_R_W 				(6FUL)
#define DMP_CFG_1 				(70UL)
#define DMP_CFG_2 				(71UL)
#define FIFO_COUNTH 			(72UL)
#define FIFO_COUNTL 			(73UL)
#define FIFO_R_W 				(74UL)
#define WHO_AM_I 				(75UL)

#endif /* __MPU6050_RES_DEFINE_H__ */