#include<SoftwareSerial.h> //Included SoftwareSerial Library
//Started SoftwareSerial at RX and TX pin of ESP8266/NodeMCU
SoftwareSerial s(3,1);

void setup() {
  //Serial S Begin at 9600 Baud
  //s.begin(9600);
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() {
  String senha;
  if (Serial.available()) {
    senha = Serial.write(Serial.read());
    Serial.print("Entrou no ESP 8266");
    Serial.print(senha);
  }
}
