#include "disableSoloTaskWtd.h"

inline void disableTaskWtd()
{
    esp_task_wdt_delete(xTaskGetIdleTaskHandleForCPU(0));
    esp_task_wdt_delete(xTaskGetIdleTaskHandleForCPU(1));
    esp_task_wdt_deinit();
}