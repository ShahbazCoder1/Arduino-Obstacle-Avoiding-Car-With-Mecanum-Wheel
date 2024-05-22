//Arduino Obstacle Avoiding Car With Mecanum Wheel
//Created By roboattic Lab
//Please Subscribe and Support us - https://youtube.com/@roboatticLab
//Contact me here https://www.instagram.com/roboattic_lab/
//You need to include AF Motor.h library before uploading the sketch, otherwise you'll get compilation error message.

#include <AFMotor.h>  // Include the AFMotor library for motor control

AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ); 
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

// Define the ultrasonic sensor pins
const int trigPin = A1;  // Change to a digital pin if needed
const int echoPin = A0;  // Change to a digital pin if needed



void setup() {
  Serial.begin(9600);  // Start serial communication for debugging
  // Set motor speed (adjust as needed)
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  motor1.setSpeed(150);
  motor2.setSpeed(150);
  motor3.setSpeed(150);
  motor4.setSpeed(150);
  randomSeed(analogRead(0));  // Initialize random seed
}

long duration;
int distance;

void loop() {
  // Get the distance from the ultrasonic sensor
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  // Print the distance to the serial monitor (for debugging)
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

    // Obstacle avoidance logic
    if (distance < 20) {  // Adjust the threshold distance as needed
      // Obstacle detected - Stop the car
      stopCar();
      // Back up for a short time
      backUp(1000);
      // Turn to the left or right randomly to avoid the obstacle
      int randomTurn = random(0, 2);
      if (randomTurn == 0) {
        strafeLeft(1000);  // Adjust strafing time as needed
      } else {
        strafeRight(1000);
      }
      // Move forward again
      moveForward();
    } else {
      // No obstacle detected - Move forward
      moveForward();
    }
  delay(50);  // Delay between readings
}

// Function to move the car forward
void moveForward() {
  motor1.setSpeed(150);
  motor1.run(FORWARD);
  motor2.setSpeed(150);
  motor2.run(FORWARD);
  motor3.setSpeed(150);
  motor3.run(FORWARD);
  motor4.setSpeed(150);
  motor4.run(FORWARD);
}

// Function to stop the car
void stopCar() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

// Function to move the car backward
void backUp(unsigned long duration) {
  motor1.setSpeed(150);
  motor1.run(BACKWARD);
  motor2.setSpeed(150);
  motor2.run(BACKWARD);
  motor3.setSpeed(150);
  motor3.run(BACKWARD);
  motor4.setSpeed(150);
  motor4.run(BACKWARD);
  delay(duration);
  stopCar();
}

// Function to strafe the car left
void strafeLeft(unsigned long duration) {
  motor1.setSpeed(150);
  motor1.run(BACKWARD);
  motor2.setSpeed(150);
  motor2.run(FORWARD);
  motor3.setSpeed(150);
  motor3.run(BACKWARD);
  motor4.setSpeed(150);
  motor4.run(FORWARD);
  delay(duration);
  stopCar();
}

// Function to strafe the car right
void strafeRight(unsigned long duration) {
  motor1.setSpeed(150);
  motor1.run(FORWARD);
  motor2.setSpeed(150);
  motor2.run(BACKWARD);
  motor3.setSpeed(150);
  motor3.run(FORWARD);
  motor4.setSpeed(150);
  motor4.run(BACKWARD);
  delay(duration);
  stopCar();
}
