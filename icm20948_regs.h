#ifndef _IMC20948_REGS_H_
#define _IMC20948_REGS_H_

#define BANK_0			(0x00 << 8)
#define BANK_1			(0x10 << 8)
#define BANK_2			(0x20 << 8)
#define BANK_3			(0x30 << 8)

#define REG_BANK_SEL		(0x7f)

#define WHO_AM_I		(0x00 | BANK_0)
#define USER_CTRL		(0x03 | BANK_0)
#define LP_CONFIG		(0x05 | BANK_0)
#define PWR_MGMT_1		(0x06 | BANK_0)
#define PWR_MGMT_2		(0x07 | BANK_0)
#define INT_PIN_CFG		(0x0f | BANK_0)
#define INT_ENABLE		(0x10 | BANK_0)
#define INT_ENABLE_1		(0x11 | BANK_0)
#define INT_ENABLE_2		(0x12 | BANK_0)
#define INT_ENABLE_3		(0x13 | BANK_0)
#define I2C_MST_STATUS		(0x17 | BANK_0)
#define INT_STATUS		(0x19 | BANK_0)
#define INT_STATUS_1		(0x1a | BANK_0)
#define INT_STATUS_2		(0x1b | BANK_0)
#define INT_STATUS_3		(0x1c | BANK_0)
#define DELAY_TIMEH		(0x28 | BANK_0)
#define DELAY_TIMEL		(0x29 | BANK_0)
#define ACCEL_XOUT_H		(0x2d | BANK_0)
#define ACCEL_XOUT_L		(0x2e | BANK_0)
#define ACCEL_YOUT_H		(0x2f | BANK_0)
#define ACCEL_YOUT_L		(0x30 | BANK_0)
#define ACCEL_ZOUT_H		(0x31 | BANK_0)
#define ACCEL_ZOUT_L		(0x32 | BANK_0)
#define GYRO_XOUT_H		(0x33 | BANK_0)
#define GYRO_XOUT_L		(0x34 | BANK_0)
#define GYRO_YOUT_H		(0x35 | BANK_0)
#define GYRO_YOUT_L		(0x36 | BANK_0)
#define GYRO_ZOUT_H		(0x37 | BANK_0)
#define GYRO_ZOUT_L		(0x38 | BANK_0)
#define TEMP_OUT_H		(0x39 | BANK_0)
#define TEMP_OUT_L		(0x3a | BANK_0)
#define EXT_SLV_SENS_DATA_00	(0x3b | BANK_0)
#define EXT_SLV_SENS_DATA_01	(0x3c | BANK_0)
#define EXT_SLV_SENS_DATA_02	(0x3d | BANK_0)
#define EXT_SLV_SENS_DATA_03	(0x3e | BANK_0)
#define EXT_SLV_SENS_DATA_04	(0x3f | BANK_0)
#define EXT_SLV_SENS_DATA_05	(0x40 | BANK_0)
#define EXT_SLV_SENS_DATA_06	(0x41 | BANK_0)
#define EXT_SLV_SENS_DATA_07	(0x42 | BANK_0)
#define EXT_SLV_SENS_DATA_08	(0x43 | BANK_0)
#define EXT_SLV_SENS_DATA_09	(0x44 | BANK_0)
#define EXT_SLV_SENS_DATA_10	(0x45 | BANK_0)
#define EXT_SLV_SENS_DATA_11	(0x46 | BANK_0)
#define EXT_SLV_SENS_DATA_12	(0x47 | BANK_0)
#define EXT_SLV_SENS_DATA_13	(0x48 | BANK_0)
#define EXT_SLV_SENS_DATA_14	(0x49 | BANK_0)
#define EXT_SLV_SENS_DATA_15	(0x4a | BANK_0)
#define EXT_SLV_SENS_DATA_16	(0x4b | BANK_0)
#define EXT_SLV_SENS_DATA_17	(0x4c | BANK_0)
#define EXT_SLV_SENS_DATA_18	(0x4d | BANK_0)
#define EXT_SLV_SENS_DATA_19	(0x4e | BANK_0)
#define EXT_SLV_SENS_DATA_20	(0x4f | BANK_0)
#define EXT_SLV_SENS_DATA_21	(0x50 | BANK_0)
#define EXT_SLV_SENS_DATA_22	(0x51 | BANK_0)
#define EXT_SLV_SENS_DATA_23	(0x52 | BANK_0)
#define FIFO_EN_1		(0x66 | BANK_0)
#define FIFO_EN_2		(0x67 | BANK_0)
#define FIFO_RST		(0x68 | BANK_0)
#define FIFO_MODE		(0x69 | BANK_0)
#define FIFO_COUNTH		(0x70 | BANK_0)
#define FIFO_COUNTL		(0x71 | BANK_0)
#define FIFO_R_W		(0x72 | BANK_0)
#define DATA_RDY_STATUS		(0x74 | BANK_0)
#define FIFO_CFG		(0x76 | BANK_0)

#define SELF_TEST_X_GYRO	(0x02 | BANK_1)
#define SELF_TEST_Y_GYRO	(0x03 | BANK_1)
#define SELF_TEST_Z_GYRO	(0x04 | BANK_1)
#define SELF_TEST_X_ACCEL	(0x0e | BANK_1)
#define SELF_TEST_Y_ACCEL	(0x0f | BANK_1)
#define SELF_TEST_Z_ACCEL	(0x10 | BANK_1)
#define XA_OFFS_H		(0x14 | BANK_1)
#define XA_OFFS_L		(0x15 | BANK_1)
#define YA_OFFS_H		(0x17 | BANK_1)
#define YA_OFFS_L		(0x18 | BANK_1)
#define ZA_OFFS_H		(0x1a | BANK_1)
#define ZA_OFFS_L		(0x1b | BANK_1)
#define TIMEBASE_CORRECTION_PLL	(0x28 | BANK_1)

#define GYRO_SMPLRT_DIV		(0x00 | BANK_2)
#define GYRO_CONFIG_1		(0x01 | BANK_2)
#define GYRO_CONFIG_2		(0x02 | BANK_2)
#define XG_OFFS_USRH		(0x03 | BANK_2)
#define XG_OFFS_USRL		(0x04 | BANK_2)
#define YG_OFFS_USRH		(0x05 | BANK_2)
#define YG_OFFS_USRL		(0x06 | BANK_2)
#define ZG_OFFS_USRH		(0x07 | BANK_2)
#define ZG_OFFS_USRL		(0x08 | BANK_2)
#define ODR_ALIGN_EN		(0x09 | BANK_2)
#define ACCEL_SMPLRT_DIV_1	(0x10 | BANK_2)
#define ACCEL_SMPLRT_DIV_2	(0x11 | BANK_2)
#define ACCEL_INTEL_CTRL	(0x12 | BANK_2)
#define ACCEL_WOM_THR		(0x13 | BANK_2)
#define ACCEL_CONFIG		(0x14 | BANK_2)
#define ACCEL_CONFIG_2		(0x15 | BANK_2)
#define FSYNC_CONFIG		(0x52 | BANK_2)
#define TEMP_CONFIG		(0x53 | BANK_2)
#define MOD_CTRL_USR		(0x54 | BANK_2)

#define I2C_MST_ODR_CONFIG	(0x00 | BANK_3)
#define I2C_MST_CTRL		(0x01 | BANK_3)
#define I2C_MST_DELAY_CTRL	(0x02 | BANK_3)
#define I2C_SLV0_ADDR		(0x03 | BANK_3)
#define I2C_SLV0_REG		(0x04 | BANK_3)
#define I2C_SLV0_CTRL		(0x05 | BANK_3)
#define I2C_SLV0_DO		(0x06 | BANK_3)
#define I2C_SLV1_ADDR		(0x07 | BANK_3)
#define I2C_SLV1_REG		(0x08 | BANK_3)
#define I2C_SLV1_CTRL		(0x09 | BANK_3)
#define I2C_SLV1_DO		(0x0a | BANK_3)
#define I2C_SLV2_ADDR		(0x0b | BANK_3)
#define I2C_SLV2_REG		(0x0c | BANK_3)
#define I2C_SLV2_CTRL		(0x0d | BANK_3)
#define I2C_SLV2_DO		(0x0e | BANK_3)
#define I2C_SLV3_ADDR		(0x0f | BANK_3)
#define I2C_SLV3_REG		(0x10 | BANK_3)
#define I2C_SLV3_CTRL		(0x11 | BANK_3)
#define I2C_SLV3_DO		(0x12 | BANK_3)
#define I2C_SLV4_ADDR		(0x13 | BANK_3)
#define I2C_SLV4_REG		(0x14 | BANK_3)
#define I2C_SLV4_CTRL		(0x15 | BANK_3)
#define I2C_SLV4_DO		(0x16 | BANK_3)
#define I2C_SLV4_DI		(0x17 | BANK_3)

#define RV_WHO_AM_I		(0xEA)

#define RV_CLKSEL_0		(1 << 0)
#define RV_CLKSEL_1		(1 << 1)
#define RV_CLKSEL_2		(1 << 2)
#define RV_DEVICE_TEMP_DIS	(1 << 3)
#define RV_LP_EN		(1 << 5)
#define RV_SLEEP		(1 << 6)
#define RV_DEVICE_RESET		(1 << 7)

#define RV_I2C_MST_RST		(1 << 1)
#define RV_SRAM_RST		(1 << 2)
#define RV_DMP_RST		(1 << 3)
#define RV_I2C_IF_DIS		(1 << 4)
#define RV_I2C_MST_EN		(1 << 5)
#define RV_FIFO_EN		(1 << 5)
#define RV_DMP_EN		(1 << 6)

#define RV_GYRO_FCHOICE		(1 << 0)
#define RV_GYRO_FS_SEL_0	(1 << 1)
#define RV_GYRO_FS_SEL_1	(1 << 2)
#define RV_GYRO_DLPFCFG_0	(1 << 3)
#define RV_GYRO_DLPFCFG_1	(1 << 4)
#define RV_GYRO_DLPFCFG_2	(1 << 5)

#define RV_GYRO_FS_SEL(x)	((x & 0x03) << 1)
#define RV_GYRO_DLPFCFG(x)	((x & 0x07) << 3)

#define RV_ACCEL_FCHOICE	(1 << 0)
#define RV_ACCEL_FS_SEL_0	(1 << 1)
#define RV_ACCEL_FS_SEL_1	(1 << 2)
#define RV_ACCEL_DLPFCFG_0	(1 << 3)
#define RV_ACCEL_DLPFCFG_1	(1 << 4)
#define RV_ACCEL_DLPFCFG_2	(1 << 5)

#define RV_ACCEL_FS_SEL(x)	((x & 0x03) << 1)
#define RV_ACCEL_DLPFCFG(x)	((x & 0x07) << 3)

#define RV_TEMP_DLPFCFG_0	(1 << 0)
#define RV_TEMP_DLPFCFG_1	(1 << 1)
#define RV_TEMP_DLPFCFG_2	(1 << 2)

#define RV_TEMP_DLPFCFG(x)	((x & 0x07) << 0)

#define RV_I2C_SLV0_NACK	(1 << 0)
#define RV_I2C_SLV1_NACK	(1 << 1)
#define RV_I2C_SLV2_NACK	(1 << 2)
#define RV_I2C_SLV3_NACK	(1 << 3)
#define RV_I2C_SLV4_NACK	(1 << 4)
#define RV_I2C_LOST_ARB		(1 << 5)
#define RV_I2C_SLV4_DONE	(1 << 6)
#define RV_PASS_THROUGH		(1 << 7)

#define RV_I2C_SLV0_LENG_0	(1 << 0)
#define RV_I2C_SLV0_LENG_1	(1 << 1)
#define RV_I2C_SLV0_LENG_2	(1 << 2)
#define RV_I2C_SLV0_LENG_3	(1 << 3)
#define RV_I2C_SLV0_GRP		(1 << 4)
#define RV_I2C_SLV0_REG_DIS	(1 << 5)
#define RV_I2C_SLV0_BYTE_SW	(1 << 6)
#define RV_I2C_SLV0_EN		(1 << 7)

#define RV_I2C_SLV4_DLY_0	(1 << 0)
#define RV_I2C_SLV4_DLY_1	(1 << 1)
#define RV_I2C_SLV4_DLY_2	(1 << 2)
#define RV_I2C_SLV4_DLY_3	(1 << 3)
#define RV_I2C_SLV4_DLY_4	(1 << 4)
#define RV_I2C_SLV4_REG_DIS	(1 << 5)
#define RV_I2C_SLV4_INT_EN	(1 << 6)
#define RV_I2C_SLV4_EN		(1 << 7)

#define MAG_WIA2		(0x01)
#define MAG_ST1			(0x10)
#define MAG_HXL			(0x11)
#define MAG_HXH			(0x12)
#define MAG_HYL			(0x13)
#define MAG_HYH			(0x14)
#define MAG_HZL			(0x15)
#define MAG_HZH			(0x16)
#define MAG_ST2			(0x18)
#define MAG_CNTL2		(0x31)
#define MAG_CNTL3		(0x32)
#define MAG_TS1			(0x33)
#define MAG_TS2			(0x34)

#define RV_MAG_WIA2		(0x09)

#define RV_MAG_SRST		(1 << 0)

#define RV_MAG_HOFL		(1 << 3)

#define RV_MAG_MODE_SINGLE	(0x01)
#define RV_MAG_MODE_10HZ	(0x02)
#define RV_MAG_MODE_20HZ	(0x04)
#define RV_MAG_MODE_50HZ	(0x06)
#define RV_MAG_MODE_100HZ	(0x08)
#define RV_MAG_MODE_TEST	(0x10)

#endif
