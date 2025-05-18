// Constant Variables.
const int inductionSensorPin = A0;

// Value variables.
int value;

void setup() {
// %%%%%%%%%%%%% INFORMATION %%%%%%%%%%%%%%%%%%%%
// Please do a calibration first.
// Default value is around 903, then there is no metal detected, light is inactive.
// If value is lower than 100 there is metal resistance, the light will activates on the sensor.

Serial.begin(9600);
Serial.println("Starting calibration... Please wait 20 seconds to calibrate.");
delay(20000); // Waits for the sensor to calibrate.
Serial.println("Calibration finished.");

}

void loop() {
// Reads sensor data.
value=analogRead (inductionSensorPin);

if (value>= 100){
Serial.print("No metal detected. Value is: ");
Serial.println(value);

} else {
Serial.print("Metal detected. Value is: ");
Serial.println(value);

}
delay(1000);
}
