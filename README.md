# How to Make an Arduino Obstacle Avoiding Car With Mecanum Wheel

![Alt text](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/raw/main/Images/IMG20240520085110.jpg)

Greetings everyone, and welcome to my GitHub tutorial. Today, I'll guide you through the process of creating an Arduino Obstacle Avoiding Car with Mecanum Wheel.

## Project Overview:

In this project, we will use an Ultrasonic Sensor to measure distances. Based on the detected distance, the car will take appropriate actions. For example, if an obstacle is detected within 20 cm, the car will change its path by performing an omnidirectional movement.
#### Without further ado, let's dive into the project and get started!
## Supplies:

| 3D Printed Chassis   | Arduino Uno             | Motor Driver            | Ultrasonic Sensor       |
|----------------------|-------------------------|-------------------------|-------------------------|
| ![Mecanum Wheel](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/raw/main/Images/img%20wheel.jpg) | ![Image 1](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/raw/main/Images/IMG_20240522_075342.jpg) | ![Image 2](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/raw/main/Images/IMG_20240522_075351.jpg) | ![Image 3](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/raw/main/Images/IMG_20240522_075407.jpg) |

### Amazon:
- Arduino Uno: [Amazon Link](https://amzn.to/3zJpqrU)
- L298D Motor Driver: [Amazon Link](https://amzn.to/3vA9dBO)
- UltraSonic Sensor: [Amazon Link](https://amzn.to/3vA9dBO)
- Gear Motor: [Amazon Link](https://amzn.to/3vA9dBO)
- Mecanum Wheel: [Bitly Link](https://bit.ly/4bOr5P6)
- Battery Holder: [Amazon Link](https://amzn.to/3vA9dBO)
- Battery: (Get it in an old power bank)

### Quartz Components:
- Arduino Uno: [Quartz Components](https://bit.ly/3QQdbDN)
- L298D Motor Driver: [Quartz Components](https://bit.ly/3cOLKX2)
- UltraSonic Sensor: [Quartz Components](https://bit.ly/3cOLKX2)
- Gear Motor: [Quartz Components](https://bit.ly/3cOLKX2)
- Mecanum Wheel: [Quartz Components](https://bit.ly/3UPQQri)
- Battery Holder: [Quartz Components](https://bit.ly/3cOLKX2)
- Battery: [Quartz Components](https://bit.ly/3cOLKX2)

### Tools:
- Soldering iron kit
- Wirecutter
- Glue gun
## Modeling Chassis in Thinkercad
| Chassis              | Wheel Couple            |
|----------------------|-------------------------|
| ![Image](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Images/Car%20Chassis.png) | ![Image 1](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Images/Wheel%20Couple.png) |

I used Tinkercad to plan and design my project. I designed this chassis with three things in mind: easy assembly, 3D printability, and affordability. After finalizing the design, I exported the file in STL format to ensure it was ready for 3D printing. The attached file includes all necessary components and dimensions for accurate printing and straightforward assembly. For even greater affordability, you can also consider CNC cutting the chassis frame from an acrylic sheet.

[Download Car Chassis STL File](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Car%20Chassis.stl)
###
[Download Wheel Couple STL File](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Wheel%20Couple.stl)

## Circuit Connections:
| | | | | |
|---|---|---|---|---|
| ![Image 1](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Circuit%20Diagram.jpg) | ![Image 2](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Images/IMG_20240522_075359.jpg) | ![Image 3](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Images/IMG_20240522_075418.jpg) | ![Image 4](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Images/Screenshot%202024-05-22%20072614.png) | ![Image 5](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/Images/IMG_20240522_075425.jpg) |

Follow the Instructions:

1. Mount the Arduino Uno and L298D Motor Driver Shield to the chassis.
2. Connect the Gear Motor wires to the Motor Driver motor pin as shown in the circuit diagram.
3. Carefully mount the Ultrasonic Sensor to the front part of the chassis using hot glue.
4. Follow the Ultrasonic Sensor connection from Image No. 3.
5. Mount the Battery Holder to the chassis as shown in the image.

## Upload the Sketch:
![Image](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/raw/main/Images/Screenshot%202024-05-22%20080120.png)

~ Connect the USB cable to the Arduino Uno.
###
~ Disconnect the Echo and Trig pins of the Ultrasonic Sensor to ensure the code uploads successfully.

CODE: [Arduino Code File](https://github.com/ShahbazCoder1/Arduino-Obstacle-Avoiding-Car-With-Mecanum-Wheel/blob/main/mecanum_wheel_obstracl_avoiding_car.ino)

## Working Video and Tutorial:

Once the code has been uploaded, insert the battery into the Battery Holder to activate the project.

[Watch the video](https://www.youtube.com/shorts/q9h_bwrmlRw)

I will continue to update this repository with new information. Don’t forget to follow me for updates on new projects and subscribe to my YouTube channel (YouTube: roboattic Lab) for more content. Thank you for your support.

