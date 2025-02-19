void ControlMotors(void *pvParameters) {
    while (1) {
        if (distanceValue >= 300) {
            avoidObstacle(motorsSpeed);
        } else {
            lineTrace(motorsSpeed);
        }
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}
