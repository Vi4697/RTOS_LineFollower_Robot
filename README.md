# 🚀 RTOS Line Follower Robot

## 📌 Overview
This project demonstrates a **line-following robot** with **obstacle avoidance**.  
There are **two implementations**:
1. **Basic Version (`basic_version/`)**:  
   - Uses standard Arduino loop.
   - Reads sensors and moves accordingly.
2. **RTOS Version (`rtos_version/`)**:  
   - Uses **FreeRTOS** for real-time scheduling.
   - Runs **sensor reading & motor control as separate tasks**.

## 📂 Project Structure
- `basic_version/` → **Standard implementation** (Arduino loop-based).
- `rtos_version/` → **Advanced RTOS implementation**.
- `docs/` → **Documentation on sensors and motor control**.

## 🛠 Setup & Installation
1. Install **Arduino IDE**.
2. Install **FreeRTOS Library** for `rtos_version`:
3. Upload the corresponding `.ino` files.
4. Observe behavior via **Serial Monitor**.

## 🤝 Contributions
- Improve **RTOS scheduling**.
- Add **more sensors** (e.g., gyroscope).
- Implement **Bluetooth control**.
