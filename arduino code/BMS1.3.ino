#include <BMS.h>
#include <Wire.h>

//const int BMS_INTERRUPT_IN = 5;
#define I2CAddress 0x01

BMS BMS_MAIN(true, false);

void setup() {
  Serial.begin(115200);
  
  BMS_MAIN.begin();
  
  Wire.begin(I2CAddress);
  Wire.onRequest(requestEvent);

  //attachInterrupt(digitalPinToInterrupt(BMS_INTERRUPT_IN), interruptEvent, RISING);

  delay(100);
}

void loop() {
  BMS_MAIN.read();
  
  //BMS_MAIN.CANReceive();  
  BMS_MAIN.CANSend();

  BMS_MAIN.DisplaySend();
}

void serialEvent(){
  char raiz = 0, filha = 0;
  if(Serial.available()){
    raiz = Serial.read();
    
    switch(raiz){
    case 'T':
      for(int i = 0; i < MAX_CELULAS; i++){
        Serial.print("T");
        Serial.print(i);
        Serial.print("= ");
        Serial.print(BMS_MAIN.getTensao(i));
        Serial.print("    ");
        if((i % 4) == 0)
          Serial.println();
      }
    break;
    
    case 't':
      for(int i = 0; i < MAX_PTC; i++){
        Serial.print("t");
        Serial.print(i);
        Serial.print("= ");
        Serial.print(BMS_MAIN.getTemperatura(i));
        Serial.print("    ");
        if((i % 4) == 0)
          Serial.println();
      }
    break;

    case 'A':
      Serial.println();
      Serial.print("A = ");
      Serial.println(BMS_MAIN.getCorrente());
    break;
    
    case 'M':
      Serial.println();
      Serial.print("tensao media = ");
      Serial.println(BMS_MAIN.getTensaoMedia());
      Serial.println();
      Serial.print("temperatura media = ");
      Serial.println(BMS_MAIN.getTemperaturaMedia());
    break;
    }
  }
}

void requestEvent(){
  /*Wire.write("Celulas\n");
  for(int i = 0; i < MAX_CELULAS; i++){
    Wire.write(BMS_DIR.getTensao(i));
    Wire.write(" ");
  }
  Wire.write("PTC \n");
  for(int i = 0; i < MAX_PTC; i++){
    Wire.write(BMS_DIR.getTemperatura(i));
    Wire.write(" ");
  }
  Wire.write("Corrente\n");
  Wire.write(BMS_DIR.getCorrente());

  Wire.write("\n\n");*/
}
/*
void interruptEvent(){
  BMS_MAIN.BMSError();
}*/
