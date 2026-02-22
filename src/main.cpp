#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Ankit Patel
 * @date 22/02/2026
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

int SensorPin=A0;
int  SensorValue=0;


void setup() {
    Serial.begin(9600);
}
void loop() {
    SensorValue=analogRead(SensorPin);
