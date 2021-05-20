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

#ifdef __cplusplus
}
#endif

#endif