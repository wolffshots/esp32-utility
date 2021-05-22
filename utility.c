/*
 * MIT License
 *
 * Copyright (c) 2021 wolffshots
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 * A note on the copyright line: https://www.copyright.gov/title17/92chap4.html#408
 */

/**
 * @file utility.c
 * @brief implementation for simple utility functions
 */

#include "utility.h"
#include "esp_log.h"

static const char *TAG = CONFIG_UTILITY_LOG_TAG;

/** prints esp chip information */
void print_chip_info(void)
{
       esp_chip_info_t chip_info;
       esp_chip_info(&chip_info);
       ESP_LOGI(TAG, "This is %s chip with %d CPU cores, WiFi%s%s, ",
                CONFIG_IDF_TARGET,
                chip_info.cores,
                (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
                (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");
       ESP_LOGI(TAG, "silicon revision %d, ", chip_info.revision);
       ESP_LOGI(TAG, "%dMB %s flash\n", spi_flash_get_chip_size() / (1024 * 1024),
                (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");
       ESP_LOGI(TAG, "Free heap: %d\n", esp_get_free_heap_size());
}
/** 
 * delay a given amount of time
 * @param millis the number of millis to delay
 * */
void util_delay_millis(int millis)
{
       vTaskDelay(millis / portTICK_RATE_MS);
}
/** 
 * delay a given amount of time
 * @param seconds the number of seconds to delay
 * */
void util_delay_seconds(int seconds)
{
       vTaskDelay(seconds * (1000 / portTICK_RATE_MS));
}
/** 
 * delay a given amount of time
 * @param minutes the number of minutes to delay
 * */
void util_delay_minutes(int minutes)
{
       vTaskDelay(minutes * 60 * (1000 / portTICK_RATE_MS));
}

// void app_main(void){
// do nothing when directly run

// in future do testing here
// }