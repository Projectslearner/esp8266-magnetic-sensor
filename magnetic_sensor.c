/*
    Project name : ESP8266 Magnetic Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-magnetic-sensor
*/

const int hallSensorPin = D1; // Digital pin connected to the Hall effect sensor

void setup() {
  pinMode(hallSensorPin, INPUT); // Set the pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the Hall effect sensor
  int sensorValue = digitalRead(hallSensorPin);

  // Print the sensor value to the Serial Monitor
  if (sensorValue == HIGH) {
    Serial.println("Magnet Detected");
  } else {
    Serial.println("No Magnet Detected");
  }

  delay(1000); // Delay before next reading
}
