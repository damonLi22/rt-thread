/*
 * File      : dc_buffer.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006 - 2010, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2010-04-10     Bernard      first version
 * 2010-06-14     Bernard      embedded hardware dc to each widget
 */
#ifndef __RTGUI_DC_HW_H__
#define __RTGUI_DC_HW_H__

#include <rtgui/dc.h>

/* create a hardware dc */
struct rtgui_dc* rtgui_dc_hw_create(rtgui_widget_t* owner);
void rtgui_dc_hw_init(rtgui_widget_t* owner);

/* draw a hline with raw pixel data */
void rtgui_dc_hw_draw_raw_hline(struct rtgui_dc* dc, rt_uint8_t* raw_ptr, int x1, int x2, int y);

#endif
