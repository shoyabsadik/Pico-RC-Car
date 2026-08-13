# Pico Robotics RC Car  

**Author:** M. Shoyab Sadik  
**Organization:** Pico Robotics  

---

## Overview  

This project is an **Arduino-based RC Car** controlled via Serial commands. The car can move in all directions, control front/back lights, sound a horn, and adjust speed levels. It is designed for learning robotics, electronics, and remote control systems.  

---

## Features  

- **Directional control**: Forward, Backward, Left, Right, and Diagonal motions.  
- **Lights control**: Front and Back LEDs can be turned ON/OFF via commands.  
- **Horn control**: Horn can be activated/deactivated.  
- **Speed control**: Multiple speed levels for smooth motion.  
- **Stop function**: Stops all motors immediately.  

---

## Hardware Components  

- Arduino Board (UNO / Nano / Mega)  
- L298N or similar Motor Driver  
- 2 DC Motors  
- Front LED  
- Back LED  
- Buzzer / Horn  
- Jumper wires & power supply  

---

## Wiring  

| Component   | Pin Connection  |
|------------|----------------|
| Motor IN1  | D5             |
| Motor IN2  | D6             |
| Motor IN3  | D10            |
| Motor IN4  | D11            |
| Front LED  | D8             |
| Back LED   | D7             |
| Horn       | D9             |

> Make sure to connect the motor driver power pins correctly and provide adequate current to motors.  

---

## Serial Commands  

### Movement  

| Command | Action           |
|---------|----------------|
| F       | Forward         |
| B       | Backward        |
| L       | Left            |
| R       | Right           |
| G       | Forward-Left    |
| I       | Forward-Right   |
| H       | Backward-Left   |
| J       | Backward-Right  |
| S       | Stop all motors |

### Lights & Horn  

| Command | Action           |
|---------|----------------|
| W       | Front LED ON     |
| w       | Front LED OFF    |
| U       | Back LED ON      |
| u       | Back LED OFF     |
| V       | Horn ON          |
| v       | Horn OFF         |

### Speed Control  

| Command | Speed (PWM)     |
|---------|----------------|
| 0       | 100            |
| 1       | 120            |
| 2       | 140            |
| 3       | 160            |
| 4       | 180            |
| 5       | 200            |
| 6       | 220            |
| 7       | 230            |
| 8       | 240            |
| 9       | 245            |
| q       | 250            |

---

## How to Use  

1. Connect all components according to the wiring table.  
2. Upload the code to your Arduino board.  
3. Open the **Serial Monitor** at **9600 baud rate**.  
4. Send the commands to control the car’s movement, lights, horn, and speed.  

---

## Notes  

- Ensure PWM-capable pins for motor control.  
- Diagonal movements may require two motors powered for smoother motion.  
- You can adjust speed values according to your motor specifications.  
- This code is written for Arduino boards; for ESP32, replace `analogWrite` with `ledcWrite`.  

---

## Author / Contact

**M. Shoyab Sadik** – Pico Robotics  

- [LinkedIn Profile](https://www.linkedin.com/in/shoyabsadik/)  
- Contact Number: 01575317604  
