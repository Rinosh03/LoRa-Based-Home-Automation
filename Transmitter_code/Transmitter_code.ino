/* LoRa-Based Home Automation Transmitter Code
   Author: Rinosh Baskaran
   This code reads push buttons and sends commands to the receiver node
*/

#include <SoftwareSerial.h>

// LoRa Configuration
String lora_band = "865000000";    // Enter band as per your country
String lora_networkid = "5";       // LoRa Network ID
String lora_address = "1";         // Transmitter address
String lora_RX_address = "2";      // Receiver address (to send commands)

// SoftwareSerial for LoRa module
SoftwareSerial mySerial(2, 3);     // RX, TX (D2, D3)

// Button pins
#define Button1 4
#define Button2 5
#define Button3 6
#define Button4 7

#define sLed 13   // Status LED

void setup() {
  Serial.begin(9600);
  mySerial.begin(115200);

  pinMode(sLed, OUTPUT);
  digitalWrite(sLed, LOW);

  // Initialize buttons
  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);
  pinMode(Button3, INPUT_PULLUP);
  pinMode(Button4, INPUT_PULLUP);

  delay(1500); // Startup delay

  // Configure LoRa module
  configureLoRa();
}

void loop() {
  lora_control();
}

// Configure LoRa module with band, network ID, and address
void configureLoRa() {
  mySerial.println("AT+BAND=" + lora_band);
  delay(500);
  mySerial.println("AT+NETWORKID=" + lora_networkid);
  delay(500);
  mySerial.println("AT+ADDRESS=" + lora_address);
}

// Check buttons and send commands to receiver
void lora_control() {
  if(digitalRead(Button1) == LOW) {
    sendCommand("R1");
  }
  if(digitalRead(Button2) == LOW) {
    sendCommand("R2");
  }
  if(digitalRead(Button3) == LOW) {
    sendCommand("R3");
  }
  if(digitalRead(Button4) == LOW) {
    sendCommand("R4");
  }
}

// Send command to receiver node via LoRa
void sendCommand(String cmd) {
  mySerial.println("AT+SEND=" + lora_RX_address + ",3," + cmd);
  Serial.println("Sent command: " + cmd);

  // Blink LED to indicate command sent
  digitalWrite(sLed, HIGH);
  delay(200);
  digitalWrite(sLed, LOW);
  delay(200); // debounce
}
