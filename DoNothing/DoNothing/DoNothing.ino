#include <DHT.h>
#include <DHT_U.h>


void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}

void loop() {

}
//open pump
void pumpOn()
{
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
}
//close pump
void pumpOff()
{
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
}
