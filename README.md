<h1 align="center">Mini Radar</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white">
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white">
  <img src="https://img.shields.io/badge/Sensor-HC--SR04-blue?style=for-the-badge">
  <img src="https://img.shields.io/badge/Servo-SG90-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/Display-LCD%2016x2-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge">
  <img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge">
</p>

<p align="center">
  <strong>Arduino-based obstacle detection and ranging system using an HC-SR04 ultrasonic sensor, servo motor, LCD display, LEDs, and buzzer.</strong>
</p>

<p align="center">
  <img src="images/project.jpg" alt="Arduino Mini Radar" width="250">
</p>

<p align="center">
This project presents a compact radar-like obstacle detection system built with an Arduino UNO, an HC-SR04 ultrasonic sensor, and a servo motor. The sensor continuously scans a 180° field of view, measures the distance to nearby objects, displays the measured distance and scanning angle on an LCD, and activates LEDs and a buzzer to provide visual and audible obstacle alerts.
</p>

---

## Quick Navigation

**Overview** • **Key Features** • **Hardware Components** • **Project Structure** • **Working Principle** • **Block Diagram** • **Circuit Diagram** • **Hardware Prototype** • **Source Code** • **Technologies Used** • **License**

---

## Overview

The **Mini Radar** is an embedded systems project that detects nearby obstacles using an **HC-SR04 ultrasonic sensor** mounted on a rotating **SG90 servo motor**. As the sensor scans a 180° field of view, measured distances are displayed on a **16×2 LCD**, while **LEDs** and a **buzzer** provide real-time obstacle alerts.
The project demonstrates practical applications of embedded programming, sensor integration, and real-time monitoring for robotics and obstacle detection systems.

This project demonstrates the integration of sensors, actuators, embedded programming, and real-time monitoring concepts commonly used in robotics, automation, and obstacle detection applications.

## Key Features

- 📡 **180° Radar Scanning** using a servo motor for continuous environmental monitoring.
- 📏 **Real-Time Distance Measurement** with the HC-SR04 ultrasonic sensor.
- 🖥️ **LCD Display** showing the measured distance and current scanning angle.
- 🚨 **Obstacle Detection Alerts** using LEDs and a buzzer based on predefined distance thresholds.
- ⚙️ **Embedded System Implementation** built on the Arduino UNO platform.
- 🔄 **Continuous Object Monitoring** through automatic sensor sweeping and distance updates.
- 🧩 **Modular Hardware Design** integrating sensors, actuators, and display peripherals.

## Hardware Components

| Component | Description |
|-----------|-------------|
| **Arduino UNO** | Main microcontroller responsible for processing sensor data and controlling the system. |
| **HC-SR04 Ultrasonic Sensor** | Measures the distance to nearby obstacles using ultrasonic waves. |
| **SG90 Servo Motor** | Rotates the ultrasonic sensor to perform 180° environmental scanning. |
| **16×2 LCD Display** | Displays the measured distance and current scanning angle. |
| **Buzzer** | Provides an audible alert when an obstacle is detected within the warning range. |
| **LED Indicators** | Provide visual status indication based on the detected object distance. |
| **Breadboard & Jumper Wires** | Used for circuit prototyping and hardware connections. |
| **USB Power Supply** | Powers the Arduino UNO during operation. |

## Project Structure

```text
arduino-mini-radar/
│
├── README.md                 # Project documentation
├── LICENSE                   # MIT License
│
├── Arduino/
│   └── mini-radar.ino        # Arduino source code
│
└── images/
    ├── project.jpg           # Hardware prototype
    ├── working-flowchart.jpg # Project workflow
    ├── block-diagram.jpg     # System block diagram
    └── circuit-diagram.jpg   # Complete circuit schematic
```
## Working Principle

<p align="center">
  <img src="images/working-flowchart.jpg" alt="Working Flowchart" width="700">
</p>

The system performs the following operations:

1. The servo motor rotates the ultrasonic sensor across a **180° scanning range**.
2. The HC-SR04 measures the distance at each scanning angle.
3. Distance and angle values are displayed on the LCD.
4. LEDs and the buzzer are activated when an object is detected within predefined thresholds.
5. The scanning cycle repeats continuously for real-time obstacle monitoring.

## Block Diagram

<p align="center">
  <img src="images/block-diagram.jpg" alt="System Block Diagram" width="700">
</p>

The block diagram illustrates the interaction between the system components. The Arduino UNO receives distance measurements from the HC-SR04 ultrasonic sensor, controls the SG90 servo motor to perform 180° scanning, and updates the LCD with the current distance and scanning angle. Depending on the measured distance, the Arduino also activates the LEDs and buzzer to provide obstacle alerts.

## Circuit Diagram

<p align="center">
  <img src="images/circuit-diagram.jpg" alt="Circuit Diagram" width="700">
</p>

The circuit diagram presents the wiring connections between the Arduino UNO and all peripheral components, including the HC-SR04 ultrasonic sensor, SG90 servo motor, 16×2 LCD, LEDs, and buzzer. It represents the complete hardware implementation used to build and test the Mini Radar prototype.

## Hardware Prototype

<p align="center">
  <img src="images/project.jpg" alt="Arduino Mini Radar Hardware Prototype" width="200">
</p>

The hardware prototype was successfully assembled and tested using an Arduino UNO, HC-SR04 ultrasonic sensor, SG90 servo motor, 16×2 LCD, LEDs, and a buzzer. Experimental testing confirmed reliable 180° scanning, real-time distance measurement, and immediate visual and audible obstacle indication.

## Source Code

The complete Arduino implementation is available in:

```text
Arduino/
└── mini-radar.ino
```

The Arduino source code initializes all hardware components, controls the servo scanning motion, measures object distances, updates the LCD display, and activates the LEDs and buzzer according to predefined distance thresholds.

## Technologies Used

| Category | Technologies |
|----------|--------------|
| **Programming Language** | C++ (Arduino) |
| **Development Platform** | Arduino IDE |
| **Microcontroller** | Arduino UNO |
| **Distance Sensor** | HC-SR04 Ultrasonic Sensor |
| **Actuator** | SG90 Servo Motor |
| **Display** | 16×2 LCD |
| **Alert System** | LEDs, Buzzer |
| **Embedded Programming** | Arduino Framework |
| **Electronics** | Breadboard Prototyping |

## License

This project is licensed under the **MIT License**.

See the [LICENSE](LICENSE) file for more information.
