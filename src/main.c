/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/uart.h>

#define UART_DEV_NAME "/dev/ttyACM0"

//#define UART_DEV_NAME "UART_1"

void main(void)
{
    struct device *uart_dev;
    const char *hello_world = "Hello, World!\n";

    /* Inicialize o sistema Zephyr */

	while (1)
	{
			
		k_sleep(K_SECONDS(1));
		printk("Hello test\n");
		
	}


}