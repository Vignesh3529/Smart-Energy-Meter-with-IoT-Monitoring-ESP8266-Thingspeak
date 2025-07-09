#include <ESP8266WiFi.h>
#include <ThingSpeak.h>

const char* ssid = "YourWiFi";
const char* password = "YourPassword";

WiFiClient client;

unsigned long myChannelNumber = YOUR_CHANNEL;
const char* myWriteAPIKey = "YOUR_API_KEY";

// Sensor pins
int currentSensor = A0;

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  ThingSpeak.begin(client);
}

void loop() {
  float current = analogRead(currentSensor) * (5.0 / 1023.0);  // Simplified current read
  float voltage = 230;  // Assume constant mains voltage for demo
  float power = voltage * current;

  ThingSpeak.setField(1, current);
  ThingSpeak.setField(2, power);

  int response = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  if (response == 200) {
    Serial.println("Data sent to Thingspeak.");
  } else {
    Serial.println("Failed to send data.");
  }

  delay(15000); // Thingspeak minimum 15 sec interval
}
