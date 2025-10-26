# LoRa-Based Home Automation System

This project demonstrates a **LoRa-based wireless home automation system** that allows remote control of household appliances using **Arduino UNO** and **REYAX RYLR996 LoRa modules**. It provides long-range, low-power, and reliable communication between transmitter and receiver nodes.

---

## Project Overview

The system has two Arduino boards:  
- **Transmitter Node**: Sends commands via push buttons.  
- **Receiver Node**: Receives LoRa commands and toggles relays to control AC appliances.  

No Wi-Fi or Bluetooth is required, making it ideal for large homes or rural areas where there is no proper availability of internet.

---

## Components Used

| Component | Description |
|------------|-------------|
| Arduino UNO (x2) | One for transmitting, one for receiving |
| REYAX RYLR996 LoRa Module (x2) | Long-range wireless communication |
| 2-Channel 5V Relay Module | Controls 230V AC appliances |
| Push Buttons | For sending ON/OFF commands |
| Resistors (4.7kΩ, 10kΩ) | For button interfacing |
| 230V AC Bulb | Example load |

---

## Schematics & Diagrams

### Block Diagram
![Block Diagram](Schematics/Block_Diagram.png)

### Transmitter Circuit 
![Transmitter Circuit](Schematics/Tx_circuit.png)

### Receiver Circuit
![Receiver Circuit](Schematics/Rx_circuit.png)

### Final Output 
![Final Output](Schematics/Final_Output.png)

---

## ⚡ Working Principle

1. The **transmitter** Arduino reads button inputs.  
2. Pressing a button sends a **LoRa command** to the receiver node.  
3. The **receiver** Arduino toggles the corresponding relay channel.  
4. The relay switches the connected appliance (LED Bulb in this case) **ON/OFF**.

---

## Output Demonstration

![Demo GIF](Schematics/Output_Video.gif)  

Or watch the full video:  
![Output Video](Schematics/Output_Video.mp4)

---

## Features

- Long-range wireless control using **LoRa**  
- **Low power** and cost-effective design  
- Supports multiple appliances  
- Reliable communication without internet  
- Modular and easy to expand  

---

## Future Enhancements (which I am currently working on)

- Sensor integration (temperature, motion, etc.)  
- Using ESP8266 for acessing blynk capability for IoT applications  

---

