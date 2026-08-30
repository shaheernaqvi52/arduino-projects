#include <DHT.h>
#include <DHT_U.h>


#define Type DHT11
int DHT11=2;
DHT sens(DHT11,Type);
float humidity;
float Celcius;
float F;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
sens.begin();
delay(500);
}

void loop() {
//   put your main code here, to run repeatedly:
humidity=sens.readHumidity();
Celcius=sens.readTemperature();
F=sens.readTemperature(true);
Serial.print(humidity);
Serial.print(", ");
Serial.print(Celcius);
Serial.print(" Celcius Degrees")
Serial.print(", ");
Serial.print(F);
Serial.println(" F Degrees");
delay(1000);
}
