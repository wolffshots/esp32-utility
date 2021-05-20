#ifndef UTILITY_H
#define UTILITY_H

#include <stdio.h>
#include "sdkconfig.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#ifdef __cplusplus
extern "C" {
#endif

void print_chip_info(void);
void util_delay_millis(int);
void util_delay_seconds(int);
void util_delay_minutes(int);

#ifdef __cplusplus
}
#endif

#endif