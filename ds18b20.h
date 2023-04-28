
//#include <OneWire.h>
//#include <DallasTemperature.h>

#define ONE_WIRE_BUS 3  
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

int Low_temp[] = {0,-2,-4,-6,-8,-10}; 
int High_temp = 8 ;
////////////////////////////////////////////////////////////////////////
void ds_setup() {
  Serial.begin(9600);
  ///////////////////
  sensors.begin();
  /////////////////
  pinMode(4, OUTPUT);    ///VCC for DS18B20
   digitalWrite(4, HIGH);
  pinMode(2, OUTPUT);    ///GND for DS18B20
   digitalWrite(2, LOW);
}
///////////////////////////////////////////////////////////////////////
void ds_loop() {
    sensors.requestTemperatures();
    Serial.println(sensors.getTempCByIndex(0));

}
