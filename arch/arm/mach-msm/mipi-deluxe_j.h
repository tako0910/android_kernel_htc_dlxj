#ifndef MIPI_DELUXE_J_H
#define MIPI_DELUXE_J_H

#include <linux/pwm.h>
#include <linux/mfd/pm8xxx/pm8921.h>

int mipi_deluxe_j_device_register(struct msm_panel_info *pinfo,
                                 u32 channel, u32 panel);

#endif /* !MIPI_DELUXE_J_H */

