#include <Arduino.h>

const int BUZZ = 9;
const int SENSOR = A0; 
int water = 0;

void beep();

void setup() {
    pinMode(BUZZ, OUTPUT);
    Serial.begin(9600);
    beep();
}

void loop() {
    int level = analogRead(SENSOR);

    if (level > water + 15) {
        beep();
        delay(1000);
    }
}

void beep() {
    for( int i = 0; i<500;i++){
        digitalWrite(BUZZ , HIGH);
        delayMicroseconds(500);
        digitalWrite(BUZZ, LOW);
        delayMicroseconds(500);
    }
}