#include <Arduino_FreeRTOS.h>
#include "rtos_motor_control.ino"
#include "rtos_sensor_readings.ino"

TaskHandle_t TaskHandleReadSensors;
TaskHandle_t TaskHandleReadPotentiometer;
TaskHandle_t TaskHandleControlMotors;

void setup() {
    Serial.begin(9600);
    setupMotors();
    setupSensors();

    xTaskCreate(ReadSensors, "ReadSensors", 100, NULL, 3, &TaskHandleReadSensors);
    xTaskCreate(ReadPotentiometer, "ReadPotentiometer", 100, NULL, 2, &TaskHandleReadPotentiometer);
    xTaskCreate(ControlMotors, "ControlMotors", 100, NULL, 1, &TaskHandleControlMotors);

    vTaskStartScheduler();
}

void loop() {
    // RTOS handles scheduling
}
