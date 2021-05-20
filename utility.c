#include "utility.h"

/** prints esp chip information */
void print_chip_info(void)
{
       esp_chip_info_t chip_info;
       esp_chip_info(&chip_info);
       printf("This is %s chip with %d CPU cores, WiFi%s%s, ",
              CONFIG_IDF_TARGET,
              chip_info.cores,
              (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
              (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");
       printf("silicon revision %d, ", chip_info.revision);
       printf("%dMB %s flash\n", spi_flash_get_chip_size() / (1024 * 1024),
              (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");
       printf("Free heap: %d\n", esp_get_free_heap_size());
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