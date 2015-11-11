
#ifndef __ASM_ARCH_GPIO_MEHMET_H
#define __ASM_ARCH_GPIO_MEHMET_H __FILE__

/* MEHMET KEY MAP */
#define MEHMET_POWER_KEY		EXYNOS4_GPX1(3)
#define MEHMET_VOLUM_UP			EXYNOS4_GPX3(4)
#define MEHMET_VOLUM_DOWN		EXYNOS4_GPX3(3)

/* VIB KEY */
#define GPIO_VIB_PWR_EN			EXYNOS4_GPX0(7)
#define GPIO_VIB_PWM			EXYNOS4_GPD0(0)
#define GPIO_VIB_EN				EXYNOS4_GPX1(0)

/*REMOTE, JACK DET*/
#define GPIO_REMOTE_KEY_INT		EXYNOS4_GPX1(5)
#define GPIO_JACK_DET			EXYNOS4_GPX1(6)

/*LINEOUT DET*/
#define GPIO_LINEOUT_DET_N		EXYNOS4_GPX3(5)

/* DOCK DET */
#define DOCK_DET_N				EXYNOS4_GPX1(7)

/* BACKLIGHT */
#define BACKLIGHT_PWM_GPIO		EXYNOS4_GPD0(1)

/* PMIC GPIO */
#define PMIC_SET2				EXYNOS4_GPL0(0)
#define PMIC_SET3				EXYNOS4_GPL0(1)
#define PMIC_SET4				EXYNOS4_GPL0(2)
#define PMIC_DVS1				EXYNOS4_GPL0(3)
#define PMIC_DVS2				EXYNOS4_GPL0(4)
#define PMIC_DVS3				EXYNOS4_GPL0(6)
#define GPIO_PMIC_IRQ			EXYNOS4_GPX3(2)

#define GPIO_SPEAKER_AMP_ONOFF    EXYNOS4212_GPM1(2)
#define GPIO_POP_SUPPRESSOR_ONOFF EXYNOS4212_GPM1(3)

#define GPIO_HW_VERSION_0           EXYNOS4_GPL2(2)     //IN
#define GPIO_HW_VERSION_1           EXYNOS4_GPL2(1)     //IN
#define GPIO_HW_VERSION_2           EXYNOS4_GPL2(0)     //IN
#define GPIO_HW_VERSION_3           EXYNOS4_GPL2(3)     //IN

/* WIFI */
#define GPIO_WLAN_EN            EXYNOS4212_GPM0(4)
#define GPIO_WLAN_EN_AF         1
#define GPIO_WLAN_HOST_WAKE     EXYNOS4_GPX0(3)
#define GPIO_WLAN_HOST_WAKE_AF  0xF
#define GPIO_WLAN_SDIO_CLK      EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF   2
#define GPIO_WLAN_SDIO_CMD      EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF   2
#define GPIO_WLAN_SDIO_CD       EXYNOS4_GPK3(2)
#define GPIO_WLAN_SDIO_CD_AF    2
#define GPIO_WLAN_SDIO_D0       EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF    2
#define GPIO_WLAN_SDIO_D1       EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF    2
#define GPIO_WLAN_SDIO_D2       EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF    2
#define GPIO_WLAN_SDIO_D3       EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF    2

/* Bluetooth */
#define GPIO_BT_EN			EXYNOS4212_GPM0(5)
#define GPIO_BT_WAKE		EXYNOS4212_GPM0(7)
#define GPIO_BT_HOST_WAKE	EXYNOS4_GPX0(2)
#define IRQ_BT_HOST_WAKE	IRQ_EINT(2)
#define GPIO_BT_RXD			EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2
#define GPIO_BT_TXD			EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2
#define GPIO_BT_CTS			EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2
#define GPIO_BT_RTS			EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2

/* GPS */
#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF		2
#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF		2

/* ETC UART */
#define GPIO_AP_RXD			EXYNOS4_GPA1(0)
#define GPIO_AP_RXD_AF		2
#define GPIO_AP_TXD			EXYNOS4_GPA1(1)
#define GPIO_AP_TXD_AF		2
#define GPIO_TEST_RXD		EXYNOS4_GPA1(4)
#define GPIO_TEST_RXD_AF	2
#define GPIO_TEST_TXD		EXYNOS4_GPA1(5)
#define GPIO_TEST_TXD_AF	2

/* LCD */
#define GPIO_LCD_OFF_CHG		EXYNOS4212_GPM0(3)
#define GPIO_nLVDS_PDN			EXYNOS4212_GPM1(0)
#define GPIO_LCD_BL_PWM			EXYNOS4_GPD0(1)

/* max17040, max8903 (charger/fuel) */
#define nCHG_EN    EXYNOS4212_GPM0(2) //nCHG_EN   //CHGARGE_EN
#define nCHARGING  EXYNOS4_GPX2(5)    //nCHARGING //CHG
#define nDC_OK     EXYNOS4_GPX2(4)    //nDC_OK    //DOK
#define nUSB_OK    EXYNOS4_GPX2(6)    //nUSB_OK   //USB_OK
#define nBAT_FLT   EXYNOS4_GPX3(0)    //nBAT_FLT  //FLT

/* USB HUB */
#define GPIO_USB_HUB_RST        EXYNOS4212_GPM2(4)
#define GPIO_USB_HUB_INT        EXYNOS4_GPX2(0)
#define GPIO_USB_HUB_CONNECT    EXYNOS4212_GPM2(3)
#define GPIO_USB_BOOT_EN        EXYNOS4212_GPM0(0)
#define GPIO_USB_DOCK_DET       EXYNOS4_GPX1(7)

/* HDMI */
#define GPIO_HDMI_PWR_EN        EXYNOS4212_GPM3(2)
#define GPIO_HDMI_HPD           EXYNOS4_GPX3(7)
#define GPIO_HDMI_CED           EXYNOS4_GPX3(6)

/* TOUCH */
#define GPIO_TOUCH_INT			EXYNOS4_GPX0(4)
#define GPIO_TOUCH_RESET		EXYNOS4_GPB(4)
#define GPIO_TOUCH_BOOTST_EN	EXYNOS4212_GPM3(3)

/* CAMERA */
#define GPIO_CAMERA_RESET			EXYNOS4212_GPM1(4)
#define GPIO_CAMERA_SHUTDOWN		EXYNOS4212_GPM1(5)
#define GPIO_CAMERA_MCLK		EXYNOS4212_GPM2(2)
#define GPIO_CAMERA_SCL	EXYNOS4212_GPM4(0)
#define GPIO_CAMERA_SDA	EXYNOS4212_GPM4(1)

/* LSENSOR */
#define GPIO_LSENSOR_INT		EXYNOS4_GPX2(2)

/* EMMC */
#define GPIO_XMMC0_CDn            EXYNOS4_GPK0(2)

extern void mehmet_config_sleep_gpio_table(void);
extern void mehmet_config_gpio_table(void);

#endif /* __ASM_ARCH_GPIO_MEHMET_H */

