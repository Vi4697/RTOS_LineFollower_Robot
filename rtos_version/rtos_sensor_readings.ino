void ReadSensors(void *pvParameters) {
    while (1) {
        for (int i = 0; i < 4; i++) {
            lineSensors[i] = analogRead(LINE_SENSORS[i]);
        }
        distanceValue = analogRead(DISTANCE_SENSOR);
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

void ReadPotentiometer(void *pvParameters) {
    while (1) {
        motorsSpeed = map(analogRead(POTENTIOMETER), 0, 1023, 0, 255);
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}
