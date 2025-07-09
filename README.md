# Smart-Energy-Meter-with-IoT-Monitoring-ESP8266-Thingspeak
Build a system that measures energy consumption and sends real-time data to the cloud using ESP8266 Wi-Fi module and displays it on ThingSpeak. It simulates smart electricity billing systems used in smart cities.

# ⚡ IoT-Based Smart Energy Meter using ESP8266 + Thingspeak

Monitor electricity usage in real-time and send data to the cloud! This project uses current and voltage sensors along with an ESP8266 to log energy readings online.

## 🔧 Components Required
- Arduino Uno or ESP8266 NodeMCU
- ACS712 Current Sensor
- ZMPT101B Voltage Sensor (or direct voltage divider)
- ESP8266 WiFi Module (if using Arduino)
- LCD Display (optional)
- Power Supply + Resistors
- Thingspeak Account (free)

## 📡 How It Works
1. Measure current with ACS712
2. Measure voltage with ZMPT101B
3. Compute power = V × I
4. Send data to Thingspeak every 15 seconds
5. Display energy usage on LCD (optional)

## 💻 Code
- Reads voltage and current
- Calculates power
- Uploads data using HTTP to Thingspeak

## 📈 Data Monitoring
- Real-time power graph
- Daily/weekly energy usage
- Alerts for overuse (optional)

## 🧠 Ideal Use Cases
- Home automation demo
- Smart city projects
- Academic final-year IoT showcase

## 🚀 Extensions
- Add billing calculator
- Control devices remotely (IoT + Relay)
- Send SMS alerts for abnormal usage
