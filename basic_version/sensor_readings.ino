const int LINE_SENSORS[4] = { A0, A1, A2, A3 };
const int DISTANCE_SENSOR = A4;
const int POTENTIOMETER = A5;
const int LINE_THRESHOLD = 500;

void setupSensors() {
    for (int i = 0; i < 4; i++) {
        pinMode(LINE_SENSORS[i], INPUT);
    }
    pinMode(DISTANCE_SENSOR, INPUT);
    pinMode(POTENTIOMETER, INPUT);
}

int getMotorSpeed() {
    return map(analogRead(POTENTIOMETER), 0, 1023, 0, 255);
}

int getDistanceSensor() {
    return analogRead(DISTANCE_SENSOR);
}

void lineTrace(int speed) {
    int leftSpeed = speed;
    int rightSpeed = speed;

    if (analogRead(LINE_SENSORS[2]) > LINE_THRESHOLD || analogRead(LINE_SENSORS[3]) > LINE_THRESHOLD) {
        rightSpeed *= 0.4;
    } else if (analogRead(LINE_SENSORS[0]) > LINE_THRESHOLD || analogRead(LINE_SENSORS[1]) > LINE_THRESHOLD) {
        leftSpeed *= 0.4;
    }

    controlMotors(leftSpeed, rightSpeed, LOW, LOW);
}
