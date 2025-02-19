#include "motor_control.ino"
#include "sensor_readings.ino"

// Main setup function
void setup() {
    Serial.begin(9600);
    setupMotors();
    setupSensors();
}

// Main loop function
void loop() {
    int speed = getMotorSpeed();
    int distance = getDistanceSensor();

    if (distance >= 300) {
        avoidObstacle(speed);
    } else {
        lineTrace(speed);
    }
    delay(100);
}
