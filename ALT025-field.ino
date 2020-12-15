/*********************************************************************************  
Reads an analog magnetometer with an Arduino.
Sensor/Arduino connections: A0 = sensor OUT-; A1 = sensor OUT+; 5V = sensor Vcc.
Demo at: https://youtu.be/PDNVEmkQcs0
www.nve.com * www.YouTube.com/NveCorporation * sensor-apps@nve.com * Rev. 12/10/20
*********************************************************************************/
void setup() {
Serial.begin(57600); //Initialize the serial port
}
void loop() { //Read, scale, & print sensor output. Typ. sensitivity = 0.02 V/V/mT
Serial.print(float(analogRead(A1)-analogRead(A0))/1024/0.02); 
Serial.print(" mT  \r" );
delay(100); //10 samples/second
}
