int Relay_Pin1 = A5;
int Relay_Pin2 = A4;


void 2ch_setup() {
  pinMode(A3, OUTPUT);    ///VCC for relay module
   digitalWrite(A3, HIGH);
  pinMode(A6, OUTPUT);    ///GND for relay module
   digitalWrite(A6, LOW);
   
  pinMode(Relay_Pin1, OUTPUT);    ///relay_in1
   digitalWrite(Relay_Pin1, LOW);
  pinMode(Relay_Pin2, OUTPUT);    ///relay_in2
   digitalWrite(Relay_Pin2, LOW);
}

void 2ch_loop() {
  // put your main code here, to run repeatedly:

}
