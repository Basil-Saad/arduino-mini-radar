#include <Servo.h>          // Include the Servo library for controlling servo motor 
#include <LiquidCrystal.h>  // Include the LiquidCrystal library for LCD display 
 
Servo myservo;              // Create a servo object 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // Create an LCD object with specified pins 
 
int pos = 0;                // Variable to store servo position 
const int trigPin = 9;      // Ultrasonic sensor trigger pin 
const int echoPin = 10;     // Ultrasonic sensor echo pin 
const int moteur = 11;      // Servo motor pin 
const int buzzer = 12;      // Buzzer pin 
const int ledPin1 = 13;     // LED pin 1 
const int ledPin2 = 8;      // LED pin 2 
float distanceCm, DistanceSec, duration; // Variables for distance measurement 
 
void setup() { 
  myservo.attach(moteur);   // Attach servo to its pin 
  lcd.begin(16,2);          // Initialize the LCD with 16 columns and 2 rows 
  pinMode(trigPin, OUTPUT); // Set trigger pin as output 
  pinMode(echoPin, INPUT);  // Set echo pin as input 
  pinMode(buzzer, OUTPUT);  // Set buzzer pin as output 
  pinMode(ledPin1, OUTPUT); // Set LED pin 1 as output 
  pinMode(ledPin2, OUTPUT); // Set LED pin 2 as output 
  DistanceSec = 20;         // Set the desired safe distance in centimeters 
} 
 
void loop() { 
  // Sweep the servo from 0 to 180 degrees 
  for (pos = 0; pos <= 180; pos += 1) {  
    myservo.write(pos); // Set servo to current position 
    digitalWrite(trigPin, LOW); // Clear trigger pin 
    delayMicroseconds(2); 
    digitalWrite(trigPin, HIGH); // Send trigger signal 
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW); // Clear trigger signal 
 
    // Measure duration of echo signal 
    duration = pulseIn(echoPin, HIGH); 
    distanceCm = duration * 0.034 / 2; // Convert duration to distance in centimeters 
 
    // Check if detected distance is within safe range 
    if (distanceCm <= DistanceSec) { 
      // Check if distance is too close 
      if (distanceCm <= DistanceSec/2) { 
        // Activate buzzer and LED 2 
        tone(buzzer, 10);  
        digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, HIGH); 
        delay(700); 
        noTone(buzzer); // Stop buzzer sound 
         
 
 
// Display distance and angle on LCD 
        lcd.setCursor(0, 0);  
        lcd.print("Distance: ");  
        lcd.print(distanceCm);  
        lcd.print(" cm ");  
        delay(10); 
        lcd.setCursor(0, 1); 
        lcd.print("Angle : "); 
        lcd.print(pos); 
        lcd.print(" deg "); 
        delay(2000); 
      } else { 
        // Activate buzzer and LED 1 
        digitalWrite(buzzer, HIGH); 
        digitalWrite(ledPin2, LOW); 
        digitalWrite(ledPin1, HIGH); 
        delay(100); 
        digitalWrite(buzzer, LOW); 
        // Display distance and angle on LCD 
        lcd.setCursor(0, 0);  
        lcd.print("Distance: ");  
        lcd.print(distanceCm);  
        lcd.print(" cm ");  
        delay(10); 
        lcd.setCursor(0, 1); 
        lcd.print("Angle : "); 
        lcd.print(pos); 
        lcd.print(" deg "); 
        delay(2000); 
      } 
    } else { 
      // Turn off buzzer and LEDs if distance is safe 
      digitalWrite(buzzer, LOW); 
      digitalWrite(ledPin1, LOW); 
      digitalWrite(ledPin2, LOW); 
    } 
 
    // Display distance and angle on LCD 
    lcd.setCursor(0, 0);  
    lcd.print("Distance: ");  
    lcd.print(distanceCm); 
    lcd.print(" cm ");  
    delay(10); 
    lcd.setCursor(0, 1); 
    lcd.print("Angle : "); 
    lcd.print(pos); 
    lcd.print(" deg "); 
    delay(80);  
  } 
 
 // Sweep the servo from 180 to 0 degrees 
  for (pos = 180; pos >= 0; pos -= 1) {  
    myservo.write(pos); // Set servo to current position 
    digitalWrite(trigPin, LOW); // Clear trigger pin 
    delayMicroseconds(2); 
    digitalWrite(trigPin, HIGH); // Send trigger signal 
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW); // Clear trigger signal 
 
    // Measure duration of echo signal 
    duration = pulseIn(echoPin, HIGH); 
    distanceCm = duration * 0.034 / 2; // Convert duration to distance in centimeters 
 
    // Check if detected distance is within safe range 
    if (distanceCm <= DistanceSec) { 
      // Check if distance is too close 
      if (distanceCm <= DistanceSec/2) { 
        // Activate buzzer and LED 2 
        tone(buzzer, 10);  
        digitalWrite(ledPin1, LOW); 
        digitalWrite(ledPin2, HIGH); 
        delay(700); 
        noTone(buzzer); // Stop buzzer sound 
        // Display distance and angle on LCD 
        lcd.setCursor(0, 0);  
        lcd.print("Distance: ");  
        lcd.print(distanceCm);  
        lcd.print(" cm ");  
        delay(10); 
        lcd.setCursor(0, 1); 
        lcd.print("Angle : "); 
        lcd.print(pos); 
        lcd.print(" deg "); 
        delay(2000); 
      } else { 
        // Activate buzzer and LED 1 
        digitalWrite(buzzer, HIGH); 
        digitalWrite(ledPin2, LOW); 
        digitalWrite(ledPin1, HIGH); 
        delay(100); 
        digitalWrite(buzzer, LOW); 
        // Display distance and angle on LCD 
        lcd.setCursor(0, 0);  
        lcd.print("Distance: ");  
        lcd.print(distanceCm);  
        lcd.print(" cm "); 
        delay(10); 
        lcd.setCursor(0, 1); 
        lcd.print("Angle : "); 
        lcd.print(pos); 
        lcd.print(" deg "); 
        delay(2000); 
      } 
    } else { 
       
// Turn off buzzer and LEDs if distance is safe 
      digitalWrite(buzzer, LOW); 
      digitalWrite(ledPin1, LOW); 
      digitalWrite(ledPin2, LOW); 
    } 
 
    // Display distance and angle on LCD 
    lcd.setCursor(0, 0);  
    lcd.print("Distance: ");  
    lcd.print(distanceCm);  
    lcd.print(" cm "); 
    delay(10); 
    lcd.setCursor(0, 1); 
    lcd.print("Angle : "); 
    lcd.print(pos); 
    lcd.print(" deg "); 
    delay(80); 
  } 
} 
 
