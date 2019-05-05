#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/i2s.h"
#include "esp_system.h"
#define SAMPLE_RATE (8000) // 4000は正常動作しない

void I2S_Init();
void I2S_Write(char *data, int numData);
void I2S_Stop();
