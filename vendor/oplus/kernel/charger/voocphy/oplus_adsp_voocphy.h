// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2019-2021, The Linux Foundation. All rights reserved.
 */
 
 #ifndef _OPLUS_ADSP_VOOCPHY_H_
#define _OPLUS_ADSP_VOOCPHY_H_

#include "oplus_voocphy.h"

typedef enum _FASTCHG_STATUS
{
	ADSP_VPHY_FAST_NOTIFY_UNKNOW,
	ADSP_VPHY_FAST_NOTIFY_PRESENT,
	ADSP_VPHY_FAST_NOTIFY_ONGOING,
	ADSP_VPHY_FAST_NOTIFY_ABSENT,
	ADSP_VPHY_FAST_NOTIFY_FULL,
	ADSP_VPHY_FAST_NOTIFY_BAD_CONNECTED,
	ADSP_VPHY_FAST_NOTIFY_BATT_TEMP_OVER,
	ADSP_VPHY_FAST_NOTIFY_BTB_TEMP_OVER,
	ADSP_VPHY_FAST_NOTIFY_DUMMY_START,
	ADSP_VPHY_FAST_NOTIFY_ADAPTER_COPYCAT,
	ADSP_VPHY_FAST_NOTIFY_ERR_COMMU,
	ADSP_VPHY_FAST_NOTIFY_SWITCH_TEMP_RANGE,
	ADSP_VPHY_FAST_NOTIFY_COMMU_TIME_OUT,
	ADSP_VPHY_FAST_NOTIFY_COMMU_CLK_ERR,
	ADSP_VPHY_FAST_NOTIFY_COMMU_SEND_ERR,
	ADSP_VPHY_FAST_NOTIFY_HW_VBATT_HIGH,
	ADSP_VPHY_FAST_NOTIFY_HW_TBATT_HIGH,
}FASTCHG_STATUS;

void oplus_adsp_voocphy_handle_status(struct power_supply *psy, int intval);
void adsp_voocphy_exit(void);
int adsp_voocphy_init(void);

#endif