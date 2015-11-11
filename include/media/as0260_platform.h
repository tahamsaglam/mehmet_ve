
#include <linux/device.h>
#include <media/v4l2-mediabus.h>

#define MEHMET_PREVIEW_MIN_W 640
#define MEHMET_PREVIEW_MIN_H 480
#define MEHMET_PREVIEW_MAX_W 1920
#define MEHMET_PREVIEW_MAX_H 1080

struct as0260_platform_data {
	unsigned int default_width;
	unsigned int default_height;
	unsigned int max_width;
	unsigned int max_height;
	unsigned int pixelformat;
	int freq;	/* MCLK in KHz */

	/* This SoC supports Parallel & CSI-2 */
	int is_mipi;
};
	
struct as0260_mbus_platform_data {
	int id;
	struct v4l2_mbus_framefmt fmt;
	unsigned long clk_rate; /* master clock frequency in Hz */
	int (*set_power)(int on);
	int (*set_clock)(struct device *dev, int on);
};

