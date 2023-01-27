#include <Wire.h> 
int Buzzer = 12;
int trigPin = 8;
int echoPin = 9;
long duration; 
int distance = 0; 
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
SoftwareSerial mySoftwareSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
void setup()
{

      mySoftwareSerial.begin(9600);
  if (!myDFPlayer.begin(mySoftwareSerial)) {  
  }
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(Buzzer, OUTPUT); 
Serial.begin(9600); 

}
void loop()
{

digitalWrite(trigPin, HIGH);// aktifkan sensor ultrasonic
delayMicroseconds(10); // selama 10 microseconds
digitalWrite(trigPin, LOW); // matikan sensor ultrasonic
duration = pulseIn(echoPin, HIGH); 
distance= duration*0.034/2; 


if (distance > 400) // diam
{
Serial.println(distance); 

digitalWrite(Buzzer,LOW);
}
else if (distance < 400 && distance >= 300) // jika jarak lebih dari 3m
{
            myDFPlayer.volume(15); 
        myDFPlayer.play(1); 
        delay(1000);
Serial.println(distance); 
digitalWrite(Buzzer,HIGH);
delay(500);
digitalWrite(Buzzer,LOW);
delay(500);
}
else if (distance < 300 && distance >= 200 ) // jika jarak lebih dari 2m
{
            myDFPlayer.volume(15); 
        myDFPlayer.play(2); 
        delay(1000);
Serial.println(distance); 
digitalWrite(Buzzer,HIGH);
delay(500);
digitalWrite(Buzzer,LOW);
delay(500);
}
else if (distance < 200 &&  distance >= 100 ) // jika jarak lebih dari 1m
{
            myDFPlayer.volume(15); 
        myDFPlayer.play(3); 
        delay(1000);
Serial.println(distance); 
digitalWrite(Buzzer,HIGH);
delay(500);
digitalWrite(Buzzer,LOW);
delay(500);
}
else if (distance < 100 &&  distance >= 50 ) // jika jarak lebih dari setengah meter
{
            myDFPlayer.volume(15); 
        myDFPlayer.play(4); 
        delay(1000);
Serial.println(distance); 
digitalWrite(Buzzer,HIGH);
delay(500);
digitalWrite(Buzzer,LOW);
delay(500);
}
}
