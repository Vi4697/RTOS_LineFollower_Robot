# 🚀 RTOS Line Follower Robot

## 📌 Overview
This project is a **line-following robot** with **obstacle avoidance**, implemented in two versions:
1. `task2_final.ino` - Basic **line follower** with obstacle avoidance.
2. `task_rtos.ino` - An **RTOS-based version** for better multitasking.

The robot reads sensor values, adjusts motor speed, follows a line, and avoids obstacles.

## 🛠 Features
✅ **Line Following** using IR sensors (A0-A3).  
✅ **Obstacle Avoidance** using a distance sensor (A4).  
✅ **Motor Speed Control** via a potentiometer (A5).  
✅ **RTOS Version** (`task_rtos.ino`) for efficient parallel processing.

## 🔧 Components Used
| Component        | Description |
|----------------|-------------|
| **Microcontroller** | Arduino Uno/Nano/Mega |
| **IR Sensors** | 4x Infrared Line Sensors (A0-A3) |
| **Distance Sensor** | Ultrasonic or IR (A4) |
| **Potentiometer** | Used to control motor speed (A5) |
| **Motors & Driver** | L298N or similar motor driver (Pins 7, 8, 9, 10) |

## 🖼 Circuit Diagram
If available, place an **image of the circuit diagram** here (`images/line_follower_wiring.png`).

## 📥 Installation & Usage
1. Install **Arduino IDE** and required libraries (`Arduino_FreeRTOS` for RTOS version).
2. Connect components as per the **circuit diagram**.
3. Upload either:
    - `task2_final.ino` for a simple implementation.
    - `task_rtos.ino` for **RTOS-based control**.

## 🎯 How It Works
1. **Reads Line Sensors**: The robot adjusts its movement based on sensor values.
2. **Adjusts Motor Speeds**: Slows one side if deviating from the track.
3. **Detects Obstacles**: If an obstacle is detected (distance sensor > 300), it **moves back and turns**.
4. **RTOS Implementation**: `task_rtos.ino` uses **separate tasks** for sensor readings and motor control.

## 🚀 RTOS-Based Implementation (`task_rtos.ino`)
- **Multitasks sensor reading and motor control**.
- **No delays** in execution, ensuring real-time performance.
- **Better responsiveness** compared to the standard version.

## 🛠️ Setup Guide
1. Install **Arduino IDE**.
2. Install **FreeRTOS library** if using `task_rtos.ino`:
3. Connect all components.
4. Upload the `.ino` file to your Arduino.

## 🤝 Contributing
Feel free to contribute by improving:
- **Line-tracking accuracy**.
- **More efficient RTOS scheduling**.
- **New features** (like Bluetooth control).
