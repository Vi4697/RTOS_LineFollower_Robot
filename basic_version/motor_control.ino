const int MOTOR1_DIR = 7;
const int MOTOR2_DIR = 8;
const int MOTOR1_PWM = 9;
const int MOTOR2_PWM = 10;

void setupMotors() {
    pinMode(MOTOR1_DIR, OUTPUT);
    pinMode(MOTOR2_DIR, OUTPUT);
    pinMode(MOTOR1_PWM, OUTPUT);
    pinMode(MOTOR2_PWM, OUTPUT);
}

void controlMotors(int speed1, int speed2, bool dir1, bool dir2) {
    digitalWrite(MOTOR1_DIR, dir1);
    digitalWrite(MOTOR2_DIR, dir2);
    analogWrite(MOTOR1_PWM, speed1);
    analogWrite(MOTOR2_PWM, speed2);
}

void avoidObstacle(int speed) {
    controlMotors(speed, speed, HIGH, HIGH);
    delay(500);
    controlMotors(speed, speed, HIGH, LOW);
    delay(500);
    controlMotors(0, 0, LOW, LOW);
}
