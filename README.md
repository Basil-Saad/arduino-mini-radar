<h1 align="center">Arduino Mini Radar</h1>

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

The **Arduino Mini Radar** is an embedded systems project designed to detect nearby obstacles using ultrasonic sensing technology. The system combines an **Arduino UNO**, an **HC-SR04 ultrasonic sensor**, and a **servo motor** to perform continuous 180° environmental scanning.

As the servo motor rotates, the ultrasonic sensor measures the distance to surrounding objects at different angles. The measured distance and scanning angle are displayed on a **16×2 LCD**, while **LED indicators** and a **buzzer** provide real-time visual and audible alerts whenever an object is detected within predefined distance thresholds.
This project demonstrates the integration of sensors, actuators, embedded programming, and real-time monitoring concepts commonly used in robotics, automation, and obstacle detection applications.

## Key Features

- 📡 **180° Radar Scanning** using a servo motor for continuous environmental monitoring.
- 📏 **Real-Time Distance Measurement** with the HC-SR04 ultrasonic sensor.
- 🖥️ **LCD Display** showing the measured distance and current scanning angle.
- 🚨 **Obstacle Detection Alerts** using LEDs and a buzzer based on predefined distance thresholds.
- ⚙️ **Embedded System Implementation** built on the Arduino UNO platform.
- 🔄 **Continuous Object Monitoring** through automatic sensor sweeping and distance updates.
- 🧩 **Modular Hardware Design** integrating sensors, actuators, and display peripherals.
