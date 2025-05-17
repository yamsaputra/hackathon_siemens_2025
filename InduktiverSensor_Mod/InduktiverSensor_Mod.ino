// Constant Variables.
const int inductionSensorPin = A0;

// Variables.
int value;

void setup() {
// %%%%%%%%%%%%% INFORMATION %%%%%%%%%%%%%%%%%%%%
// Please do a calibration first
// Info: Value is around 903, then tehre is no metal around, no light is on at the sensor
// if value is smaller than 100 there is metal around, light is on at the sensor

Serial.begin(9600);
Serial.println("Starting Calibration... PLease wait 20 seconds to calibrate.");
delay(20000); // Waits for the sensor to calibrate.
}

void loop() {
// Read SensorData
value=analogRead (inductionSensorPin);

if (value>= 100)
{
Serial.print("No metal detected. Value is ");
Serial.println(value);
}

else {
Serial.print("Metal detected. Value is: ");
Serial.println(value);
}
delay(1000);

}
