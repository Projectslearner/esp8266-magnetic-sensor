# ESP8266 Magnetic Sensor Project

#### Project Overview
This project demonstrates how to use the ESP8266 microcontroller with a Hall effect sensor to detect the presence of a magnetic field. The Hall effect sensor outputs a digital signal based on whether a magnet is present near it.

#### Components Needed
- **ESP8266 Microcontroller**
- **Hall Effect Sensor Module**
- **Magnet (for testing)** 
- **Jumper Wires**

#### Circuit Setup
1. **Connecting the Hall Effect Sensor to ESP8266:**
   - Connect the digital output pin of the Hall effect sensor module to GPIO pin D1 on the ESP8266.
   - Ensure proper power (VCC) and ground (GND) connections between the ESP8266 and the Hall effect sensor module.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - The Serial Monitor will display whether a magnet is detected ("Magnet Detected") or not ("No Magnet Detected").
   - Ensure that a magnet is brought close to the Hall effect sensor to observe changes in detection status.

#### Applications
- **Proximity Detection:** Detect the presence of magnets or magnetic materials in proximity.
- **Door/window Sensors:** Use in security systems to detect opening/closing of doors or windows equipped with magnets.
- **Industrial Automation:** Monitor the position of machinery parts using magnets.

#### Notes
- **Magnet Strength:** Different magnets may affect the detection distance and reliability of the Hall effect sensor.
- **Serial Communication:** Use Serial Monitor for real-time monitoring of magnet detection status.
- **Digital Output:** The Hall effect sensor outputs a digital signal (`HIGH` or `LOW`) based on whether a magnetic field is detected.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Magnetic Sensor](https://projectslearner.com/learn/esp8266-magnetic-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner