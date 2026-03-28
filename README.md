# Smart Gas Detection System using Arduino

## Description
The Smart Gas Detection System using Arduino is designed to detect harmful gases or smoke in the environment for home safety and fire prevention. The MQ gas sensor continuously monitors air quality and sends analog data to the Arduino. When the gas concentration exceeds a preset threshold level, the buzzer alerts the user and the green LED turns OFF indicating danger. When the environment is safe, the green LED remains ON and the buzzer stays OFF. This system helps in early detection of gas leakage and prevents accidents.

## Features
- Detects harmful gases and smoke using MQ gas sensor
- Provides early warning for gas leakage and fire hazards
- Buzzer alert when gas level exceeds safe limit
- Green LED indicates safe condition
- Continuous air quality monitoring
- Simple and low-cost safety system
- Easy to install and use
- Suitable for home and kitchen safety
- Real-time gas value displayed on Serial Monitor
- Helps prevent accidents and ensures safety

- ## ⚙️ Components Required

| Component | Quantity | Description |
|----------|----------|-------------|
| Arduino UNO | 1 | Microcontroller board |
| MQ Gas Sensor (MQ2) | 1 | Detects harmful gases or smoke |
| Buzzer | 1 | Gives alarm when gas detected |
| Green LED | 1 | Indicates safe condition |
| Resistor (220Ω) | 1 | Protects LED from high current |
| Breadboard | 1 | Used for circuit connections |
| Jumper Wires | As required | For connecting components |
| USB Cable | 1 | Power supply and code upload |

| MQ Sensor Pin | Arduino Pin |
|--------------|-------------|
| VCC | 5V |
| GND | GND |
| A0 | A0 |

| Buzzer Pin | Arduino Pin |
|-----------|-------------|
| + (Positive) | D8 |
| – (Negative) | GND |

| LED Pin | Arduino Pin |
|--------|-------------|
| Anode (+) | D6 (via 220Ω resistor) |
| Cathode (–) | GND |


## 🔌 Power Supply

- The system is powered by *5V DC* supply from the Arduino UNO through a USB cable connected to a computer or laptop.
- Arduino distributes power to the *MQ gas sensor, buzzer, and green LED* through its 5V and GND pins.
- A stable 5V power supply ensures accurate gas detection and proper working of the system.

  
## ⚙️ Working Principle

- The MQ gas sensor continuously senses harmful gases or smoke in the air and sends analog signals to the Arduino UNO.
- Arduino reads the sensor value and compares it with a preset threshold level to determine whether the environment is safe or unsafe.
- If the gas concentration exceeds the safe limit, the buzzer turns ON and the green LED turns OFF, giving an alert for gas leakage or fire risk.

- 
## 🧪 Testing Procedure

- Connect all components according to the circuit diagram and upload the Arduino code to the Arduino UNO using USB cable.
- Open Serial Monitor in Arduino IDE to observe the gas sensor values in real time.
- Bring a small source of gas or smoke (like incense stick) near the sensor; when the gas level exceeds the threshold, the buzzer turns ON and the green LED turns OFF indicating danger.

- 
## ⚙️ Calibration Tips

- Allow the MQ gas sensor to warm up for 5–10 minutes before taking readings, as the sensor requires stabilization time for accurate values.
- Observe the gas values in the Serial Monitor under normal air conditions and set the threshold slightly higher than the normal reading.
- Adjust the threshold value in the Arduino code based on testing with small amounts of gas or smoke to ensure proper alert without false alarms.

- 
## 📌 Applications

- Used in homes and kitchens to detect LPG gas leakage and prevent fire accidents.
- Can be installed in industries and laboratories to monitor harmful gases and improve safety.
- Useful for air quality monitoring systems to detect smoke and protect people from hazardous environments.

- 
## ⚠️Safety Note

- Do not expose the MQ gas sensor to very high gas concentration for a long time, as it may damage the sensor.
- Ensure proper wiring and correct voltage (5V) to avoid short circuit or damage to Arduino and components.
- Perform testing in a well-ventilated area and keep flammable materials away while testing with gas or smoke.
