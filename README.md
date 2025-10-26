# LoRa-Based Home Automation

## Project Description
- This project demonstrates a home automation system using **LoRa module** and **Arduino UNO**.
- The LoRa module used in this project is from REYAX RYLR998.  
- It features a transmitter node with push buttons and a receiver node that controls relays to switch appliances like bulbs.  
- The system works over long distances using LoRa communication and can be extended for multiple devices.

---

## Components Used
- Arduino UNO  
- REYAX RYLR996 LoRa module  
- Resistors: 4.7kΩ, 10kΩ  
- Push buttons  
- 2-channel 5V relay module  
- 230V AC Bulb  

---

## Objectives

- To design a wireless control system for high-voltage appliances using LoRa module.
- Ensure reliability with a feedback mechanism for device monitoring.
- Develop a scalable, low-power wireless communication solution for diverse use cases.



---

## Schematics

### Block Diagram
![Block Diagram](Schematics/Block_Diagram.png)

### Transmitter Circuit
![Transmitter Circuit](Schematics/Tx_Circuit.jpg)

### Receiver Circuit 
![Receiver Circuit](Schematics/Rx_Circuit.jpg)

### Final Output
![Final Output](Schematics/Final_Output.jpg)
 
### Output Demo
![Output Demo](Schematics/Output_Video.gif)

### Output Full Video 
[![Output Demo](Schematics/output_video_thumbnail.png)](https://drive.google.com/file/d/1jNHrHwkPXUkkM4JPjAeco0OXrOQGzfVR/view?usp=sharing)

---

### How It Works

- Transmitter: Reads push button inputs and sends commands via LoRa to the receiver.

- Receiver: Receives commands and toggles relays to switch devices on/off.

- Status LED: Blinks on sending or receiving a command.

- Can be extended with more relays or IoT integration.

## Conclusion

- Successful wireless control of appliances over several kilometers.

- Reliable feedback mechanism for device monitoring.

- Scalable for future IoT-based home automation and industrial project


### Notes

- Ensure LoRa addresses match between transmitter and receiver.

- Use INPUT_PULLUP for buttons; connect buttons to GND when pressed.

- Modify lora_band according to your country.

### Future Enhancements (which I am currently working on)

- Combine both arduino and an IoT based mcu (preferebly) ESP8266 to provide furthur expansion to IoT applications via Blynk app.
- Increase the long range distance communication by using latest advanced LoRa Module.