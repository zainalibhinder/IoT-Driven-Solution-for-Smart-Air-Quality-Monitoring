#  IoT Driven Solution for Air Quality Monitoring

## Demo Video
[![Demo Video](https://img.youtube.com/vi/nMY6rBdEEnM/0.jpg)](https://www.youtube.com/watch?v=nMY6rBdEEnM)





## PACKAGE REQUIREMENTS


- [Arduino IDE 2.1.1](https://www.arduino.cc/en/software)
- [Mosquitto MQTT Broker](https://mosquitto.org/download/) 
- [MQTT Explorer](http://mqtt-explorer.com/)
- [Node.JS](https://nodejs.org/en)
- Node-red

## Hardware REQUIREMENTS
 
- NodeMCU ESP 32 Microcontroller
- MQ135 Sensor
- Buzzer
  

## ABOUT THE PROJECT

```
This project provides the designing and hardware implementation of a portable, user-friendly and 
economical air quality monitoring system using IoT principles. This system can be implemented for
various applications for the real tome monitoring of a Co2 concentration such as monitoring 
pollution along roadside or traffic spots, monitoring pollution level generated from different
industries, getting pollution concentration at indoor or home application or obtaining pollution
data for a specific location. For this purpose, MQ 135 gas sensor is connected to the NodeMCU 
ESP32 controller and a connection is formed with MQTT broker to publish sensor readings to the 
broker. The obtained data is then displayed on the Node red dashboard for monitoring purpose. For
future purpose, mobile phone notification system can also be implemented with this system through
developing an application which will send these readings to the user to alert alarming air level
in the environment even at remote place. Thereby, enhancing the security features of the system.
Furthermore, the controller has room to accommodate different sensors so the system can be 
expanded with different sensors to enhance the reliability of the system. After slight modification,
this system can be developed for future commercialization purpose.


 
```

## Getting Started


 1) Install the  Node.JS, Arduino IDE, MQTT Explorer and Mosquito MQTT Broker.

 2) Build the hardware setup as per the below schematic:
![image](https://github.com/zainalibhinder/IoT-Driven-Solution-for-Smart-Air-Quality-Monitoring/assets/109630795/eea1e003-de73-47d2-bf46-9bf849cfa4ab)


3) Include the PUBSUB Client and MQ135 library in the Arduino IDE code given above and modify the Network SSID and its Password.
    Also modify the MQTT server IP-address, MQTT username and password and lastly modify the topic. After these modifcations,
    uload the code to esp32 microcontroller and monitor the data on serial monitor. 
 ![image](https://github.com/zainalibhinder/IoT-Driven-Solution-for-Smart-Air-Quality-Monitoring/assets/109630795/fcb8b489-e22c-42ca-a97e-63b5d3c49c32)

6) Run terminal and install node-red
```
npm install -g --unsafe-perm node-red
```
After installation, run and the local server will start running
```
node-red
```
5) To start mosquitto broker, run in terminal
```
net start mosquitto
```
6) Configure the MQTT Explorer to create clients to
publish or subscribe to topics for testing MQQT devices and
broker.

7)Configure the Node-Red flows and dashboard to view the reading in realtime
![image](https://github.com/zainalibhinder/IoT-Driven-Solution-for-Smart-Air-Quality-Monitoring/assets/109630795/46bb06bf-30ef-4745-a9c8-ca414b3276cc)

![image](https://github.com/zainalibhinder/IoT-Driven-Solution-for-Smart-Air-Quality-Monitoring/assets/109630795/54dd6ea6-0cca-4c55-90bc-457fb11dc64d)








## License
&copy; 
[ZAIN ALI BHINDER](https://github.com/ZAINALIBHINDER)
