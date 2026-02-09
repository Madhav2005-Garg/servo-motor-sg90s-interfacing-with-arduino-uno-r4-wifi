#include <Arduino.h>
#include <Servo.h>

Servo myServo;
void setup() {
// write your initialization code here

    myServo.attach(9);
    Serial.begin(9600);
}

void loop() {
// write your code here
    for (int pos=0;pos<=180;pos+=1) {
        myServo.write(pos);
        delay(15);
        Serial.print("Servo Position: ");
        Serial.println(pos);
    }
        for (int pos=180;pos>=0;pos-=1) {
            myServo.write(pos);
            delay(15);
            Serial.print("Servo Position: ");
            Serial.println(pos);
        }
}