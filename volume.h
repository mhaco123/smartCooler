int vol_input = A1;    // select the input pin for the potentiometer
int vol_output = 0;    // value output to the PWM (analog out)
int vol = 0;  // variable to store the value coming from the sensor

void vol_setup() {
  Serial.begin(9600);
  pinMode(A2, OUTPUT);    ///VCC for Volume
   digitalWrite(A2, HIGH);
  
  pinMode(A0, OUTPUT);    ///GND for Volume
   digitalWrite(A0, LOW);
}

void vol_loop() {
  vol = analogRead(vol_input);
  vol_output = map(vol, 0, 1023, 0, 5);// map it to the range of the analog out
  Serial.println(vol_output);
}
