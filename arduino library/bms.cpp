#include "bms.h"
#include <inttypes.h>
#include "Arduino.h"
#include <mcp_can.h>
#include <LiquidCrystal.h>


void BMS::setChannel(int MUXNumber, int channelNumber){
  switch(MUXNumber){
  case 0:
    switch(channelNumber){
    case 0:
      digitalWrite(MUX0_CONTROLA, LOW);
      digitalWrite(MUX0_CONTROLB, LOW);
      digitalWrite(MUX0_CONTROLC, LOW);
    break;
    case 1:
      digitalWrite(MUX0_CONTROLA, HIGH);
      digitalWrite(MUX0_CONTROLB, LOW);
      digitalWrite(MUX0_CONTROLC, LOW);
    break;
    case 2:
      digitalWrite(MUX0_CONTROLA, LOW);
      digitalWrite(MUX0_CONTROLB, HIGH);
      digitalWrite(MUX0_CONTROLC, LOW);
    break;
    case 3:
      digitalWrite(MUX0_CONTROLA, HIGH);
      digitalWrite(MUX0_CONTROLB, HIGH);
      digitalWrite(MUX0_CONTROLC, LOW);
    break;
    case 4:
      digitalWrite(MUX0_CONTROLA, LOW);
      digitalWrite(MUX0_CONTROLB, LOW);
      digitalWrite(MUX0_CONTROLC, HIGH);
    break;
    case 5:
      digitalWrite(MUX0_CONTROLA, HIGH);
      digitalWrite(MUX0_CONTROLB, LOW);
      digitalWrite(MUX0_CONTROLC, HIGH);
    break;
    case 6:
      digitalWrite(MUX0_CONTROLA, LOW);
      digitalWrite(MUX0_CONTROLB, HIGH);
      digitalWrite(MUX0_CONTROLC, HIGH);
    break;
    case 7:
      digitalWrite(MUX0_CONTROLA, HIGH);
      digitalWrite(MUX0_CONTROLB, HIGH);
      digitalWrite(MUX0_CONTROLC, HIGH);
    break;

    default: break;
    }
  break;

  case 1:
    switch(channelNumber){
    case 0:
      digitalWrite(MUX1_CONTROLA, LOW);
      digitalWrite(MUX1_CONTROLB, LOW);
      digitalWrite(MUX1_CONTROLC, LOW);
    break;
    case 1:
      digitalWrite(MUX1_CONTROLA, HIGH);
      digitalWrite(MUX1_CONTROLB, LOW);
      digitalWrite(MUX1_CONTROLC, LOW);
    break;
    case 2:
      digitalWrite(MUX1_CONTROLA, LOW);
      digitalWrite(MUX1_CONTROLB, HIGH);
      digitalWrite(MUX1_CONTROLC, LOW);
    break;
    case 3:
      digitalWrite(MUX1_CONTROLA, HIGH);
      digitalWrite(MUX1_CONTROLB, HIGH);
      digitalWrite(MUX1_CONTROLC, LOW);
    break;
    case 4:
      digitalWrite(MUX1_CONTROLA, LOW);
      digitalWrite(MUX1_CONTROLB, LOW);
      digitalWrite(MUX1_CONTROLC, HIGH);
    break;
    case 5:
      digitalWrite(MUX1_CONTROLA, HIGH);
      digitalWrite(MUX1_CONTROLB, LOW);
      digitalWrite(MUX1_CONTROLC, HIGH);
    break;
    case 6:
      digitalWrite(MUX1_CONTROLA, LOW);
      digitalWrite(MUX1_CONTROLB, HIGH);
      digitalWrite(MUX1_CONTROLC, HIGH);
    break;
    case 7:
      digitalWrite(MUX1_CONTROLA, HIGH);
      digitalWrite(MUX1_CONTROLB, HIGH);
      digitalWrite(MUX1_CONTROLC, HIGH);
    break;

    default: break;
    }
  break;

  case 2:
    switch(channelNumber){
    case 0:
      digitalWrite(MUX2_CONTROLA, LOW);
      digitalWrite(MUX2_CONTROLB, LOW);
      digitalWrite(MUX2_CONTROLC, LOW);
    break;
    case 1:
      digitalWrite(MUX2_CONTROLA, HIGH);
      digitalWrite(MUX2_CONTROLB, LOW);
      digitalWrite(MUX2_CONTROLC, LOW);
    break;
    case 2:
      digitalWrite(MUX2_CONTROLA, LOW);
      digitalWrite(MUX2_CONTROLB, HIGH);
      digitalWrite(MUX2_CONTROLC, LOW);
    break;
    case 3:
      digitalWrite(MUX2_CONTROLA, HIGH);
      digitalWrite(MUX2_CONTROLB, HIGH);
      digitalWrite(MUX2_CONTROLC, LOW);
    break;
    case 4:
      digitalWrite(MUX2_CONTROLA, LOW);
      digitalWrite(MUX2_CONTROLB, LOW);
      digitalWrite(MUX2_CONTROLC, HIGH);
    break;
    case 5:
      digitalWrite(MUX2_CONTROLA, HIGH);
      digitalWrite(MUX2_CONTROLB, LOW);
      digitalWrite(MUX2_CONTROLC, HIGH);
    break;
    case 6:
      digitalWrite(MUX2_CONTROLA, LOW);
      digitalWrite(MUX2_CONTROLB, HIGH);
      digitalWrite(MUX2_CONTROLC, HIGH);
    break;
    case 7:
      digitalWrite(MUX2_CONTROLA, HIGH);
      digitalWrite(MUX2_CONTROLB, HIGH);
      digitalWrite(MUX2_CONTROLC, HIGH);
    break;

    default: break;
    }
  break;

  case 3:
    switch(channelNumber){
    case 0:
      digitalWrite(MUX3_CONTROLA, LOW);
      digitalWrite(MUX3_CONTROLB, LOW);
      digitalWrite(MUX3_CONTROLC, LOW);
    break;
    case 1:
      digitalWrite(MUX3_CONTROLA, HIGH);
      digitalWrite(MUX3_CONTROLB, LOW);
      digitalWrite(MUX3_CONTROLC, LOW);
    break;
    case 2:
      digitalWrite(MUX3_CONTROLA, LOW);
      digitalWrite(MUX3_CONTROLB, HIGH);
      digitalWrite(MUX3_CONTROLC, LOW);
    break;
    case 3:
      digitalWrite(MUX3_CONTROLA, HIGH);
      digitalWrite(MUX3_CONTROLB, HIGH);
      digitalWrite(MUX3_CONTROLC, LOW);
    break;
    case 4:
      digitalWrite(MUX3_CONTROLA, LOW);
      digitalWrite(MUX3_CONTROLB, LOW);
      digitalWrite(MUX3_CONTROLC, HIGH);
    break;
    case 5:
      digitalWrite(MUX3_CONTROLA, HIGH);
      digitalWrite(MUX3_CONTROLB, LOW);
      digitalWrite(MUX3_CONTROLC, HIGH);
    break;
    case 6:
      digitalWrite(MUX3_CONTROLA, LOW);
      digitalWrite(MUX3_CONTROLB, HIGH);
      digitalWrite(MUX3_CONTROLC, HIGH);
    break;
    case 7:
      digitalWrite(MUX3_CONTROLA, HIGH);
      digitalWrite(MUX3_CONTROLB, HIGH);
      digitalWrite(MUX3_CONTROLC, HIGH);
    break;

    default: break;

    }
  break;
  case 4:
    switch(channelNumber){
    case 0:
      digitalWrite(MUX4_CONTROLA, LOW);
      digitalWrite(MUX4_CONTROLB, LOW);
      digitalWrite(MUX4_CONTROLC, LOW);
    break;
    case 1:
      digitalWrite(MUX4_CONTROLA, HIGH);
      digitalWrite(MUX4_CONTROLB, LOW);
      digitalWrite(MUX4_CONTROLC, LOW);
    break;
    case 2:
      digitalWrite(MUX4_CONTROLA, LOW);
      digitalWrite(MUX4_CONTROLB, HIGH);
      digitalWrite(MUX4_CONTROLC, LOW);
    break;
    case 3:
      digitalWrite(MUX4_CONTROLA, HIGH);
      digitalWrite(MUX4_CONTROLB, HIGH);
      digitalWrite(MUX4_CONTROLC, LOW);
    break;
    case 4:
      digitalWrite(MUX4_CONTROLA, LOW);
      digitalWrite(MUX4_CONTROLB, LOW);
      digitalWrite(MUX4_CONTROLC, HIGH);
    break;
    case 5:
      digitalWrite(MUX4_CONTROLA, HIGH);
      digitalWrite(MUX4_CONTROLB, LOW);
      digitalWrite(MUX4_CONTROLC, HIGH);
    break;
    case 6:
      digitalWrite(MUX4_CONTROLA, LOW);
      digitalWrite(MUX4_CONTROLB, HIGH);
      digitalWrite(MUX4_CONTROLC, HIGH);
    break;
    case 7:
      digitalWrite(MUX4_CONTROLA, HIGH);
      digitalWrite(MUX4_CONTROLB, HIGH);
      digitalWrite(MUX4_CONTROLC, HIGH);
    break;

    default: break;

    }
  break;
  case 5:
    switch(channelNumber){
    case 0:
      digitalWrite(MUX5_CONTROLA, LOW);
      digitalWrite(MUX5_CONTROLB, LOW);
      digitalWrite(MUX5_CONTROLC, LOW);
    break;
    case 1:
      digitalWrite(MUX5_CONTROLA, HIGH);
      digitalWrite(MUX5_CONTROLB, LOW);
      digitalWrite(MUX5_CONTROLC, LOW);
    break;
    case 2:
      digitalWrite(MUX5_CONTROLA, LOW);
      digitalWrite(MUX5_CONTROLB, HIGH);
      digitalWrite(MUX5_CONTROLC, LOW);
    break;
    case 3:
      digitalWrite(MUX5_CONTROLA, HIGH);
      digitalWrite(MUX5_CONTROLB, HIGH);
      digitalWrite(MUX5_CONTROLC, LOW);
    break;
    case 4:
      digitalWrite(MUX5_CONTROLA, LOW);
      digitalWrite(MUX5_CONTROLB, LOW);
      digitalWrite(MUX5_CONTROLC, HIGH);
    break;
    case 5:
      digitalWrite(MUX5_CONTROLA, HIGH);
      digitalWrite(MUX5_CONTROLB, LOW);
      digitalWrite(MUX5_CONTROLC, HIGH);
    break;
    case 6:
      digitalWrite(MUX5_CONTROLA, LOW);
      digitalWrite(MUX5_CONTROLB, HIGH);
      digitalWrite(MUX5_CONTROLC, HIGH);
    break;
    case 7:
      digitalWrite(MUX5_CONTROLA, HIGH);
      digitalWrite(MUX5_CONTROLB, HIGH);
      digitalWrite(MUX5_CONTROLC, HIGH);
    break;

    default: break;

    }
  break;
  default: break;
  }
}

int BMS::adcRead(int adcNumber){
    int adcValue;

    switch(adcNumber){
    case 0:
        adcValue = analogRead(FILTER_OUT0);
    break;

    case 1:
        adcValue = analogRead(FILTER_OUT1);
    break;

    case 2:
        adcValue = analogRead(FILTER_OUT2);
    break;

    case 3:
        adcValue = analogRead(FILTER_OUT3);
    break;

    case 4:
        adcValue = analogRead(FILTER_OUT4);
    break;

    case 5:
        adcValue = analogRead(FILTER_OUT5);
    break;

    default: break;
    }

  return adcValue;
}

void BMS::warning(){
    digitalWrite(WARNING_LED, HIGH);
}

void BMS::tError(){
    digitalWrite(BMS_OUT, HIGH);
}


//isMain - prestar atenção
void BMS::BMS(boolean x){
    isMain = x;
    memset(celula, 0, sizeof(celula));
    memset(_celula, 0, sizeof(_celula));
    memset(temp, 0, sizeof(temp));
    memset(_temp, 0, sizeof(_temp));

    temperaturaMedia = tensaoTotal = corrente = 0;


    pinMode(BMS_OUT, OUTPUT);
    pinMode(WARNING_LED, OUTPUT);

    pinMode(MUX0_CONTROLA, OUTPUT);
    pinMode(MUX0_CONTROLB, OUTPUT);
    pinMode(MUX0_CONTROLC, OUTPUT);

    pinMode(MUX1_CONTROLA, OUTPUT);
    pinMode(MUX1_CONTROLB, OUTPUT);
    pinMode(MUX1_CONTROLC, OUTPUT);

    pinMode(MUX2_CONTROLA, OUTPUT);
    pinMode(MUX2_CONTROLB, OUTPUT);
    pinMode(MUX2_CONTROLC, OUTPUT);


    pinMode(MUX3_CONTROLA, OUTPUT);
    pinMode(MUX3_CONTROLB, OUTPUT);
    pinMode(MUX3_CONTROLC, OUTPUT);

    pinMode(MUX4_CONTROLA, OUTPUT);
    pinMode(MUX4_CONTROLB, OUTPUT);
    pinMode(MUX4_CONTROLC, OUTPUT);

    pinMode(MUX5_CONTROLA, OUTPUT);
    pinMode(MUX5_CONTROLB, OUTPUT);
    pinMode(MUX5_CONTROLC, OUTPUT);

}

void BMS::begin(){
    digitalWrite(BMS_OUT, LOW);
    digitalWrite(WARNING_LED, LOW);

    digitalWrite(MUX0_CONTROLA, LOW);
    digitalWrite(MUX0_CONTROLB, LOW);
    digitalWrite(MUX0_CONTROLC, LOW);

    digitalWrite(MUX1_CONTROLA, LOW);
    digitalWrite(MUX1_CONTROLB, LOW);
    digitalWrite(MUX1_CONTROLC, LOW);

    digitalWrite(MUX2_CONTROLA, LOW);
    digitalWrite(MUX2_CONTROLB, LOW);
    digitalWrite(MUX2_CONTROLC, LOW);

    digitalWrite(MUX3_CONTROLA, LOW);
    digitalWrite(MUX3_CONTROLB, LOW);
    digitalWrite(MUX3_CONTROLC, LOW);

    digitalWrite(MUX4_CONTROLA, LOW);
    digitalWrite(MUX4_CONTROLB, LOW);
    digitalWrite(MUX4_CONTROLC, LOW);

    digitalWrite(MUX5_CONTROLA, LOW);
    digitalWrite(MUX5_CONTROLB, LOW);
    digitalWrite(MUX5_CONTROLC, LOW);

    CAN0.begin(CAN_500KBPS);
    lcd.begin(16, 2);
}

void BMS::read(){
    int auxAdc, k, l;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 8; j++){

            setChannel(i, j);

            for(k = 0; k < 8; k++)
                auxAdc += adcRead(i);

            if((i*8) + j < 34)
                celula[(i*8) + j] = (260*(5*(auxAdc / 8)/1024))/5;

            if(celula[(i*8) + j] < MIN_TENSAO && celula[(i*8) + j] > MAX_TENSAO) tError();
            if(celula[(i*8) + j] < WARNING_TENSAO) warning();

/**************************************************************************************************
                                    TEMPERATURA
**************************************************************************************************/
            l = k = 0;
            if((i*8) + j > 35)
                temp[k] = (12*(5*(auxAdc / 8)/1024))/5;

            while(temperaturaVolt[l++] < temp[k]);

            temp[k] = (l-1) + OFFSET_TEMPERATURA_VOLT;

            if(temp[k] > MAX_TEMPERATURA) tError();
            if(temp[k++] > WARNING_TEMPERATURA) warning();
        }
    }

    corrente = ((5*analogRead(HALL))/1024) - VREF_HALL;
    corrente = abs(corrente) * IPN;
}


float BMS::getTensao(int nCelula){
    if(nCelula < MAX_CELULAS)
        return celula[nCelula];

    else return -1
}

int BMS::getTemperatura(int nPTC){
    if(nPTC < MAX_PTC)
        return temperatura[nPTC];

    else
        return -1
}

float BMS::getCorrente(){
    return corrente;
}

void BMS::CANSend(){
    unsigned char buff[8];
    int aux;

    for(int i = 0; i < MAX_CELULAS; i++){
        aux = celula[i]*100;

        memset(buff, 0, sizeof(buff));
        for(int j = 0; j < 3; j++){
            buff[j] = (aux%10) + 48;
            aux /= 10;

        }
        CAN0.sendMsgBuf(i, 0, 8, buff);
    }

    for(int i = 0; i < MAX_PTC; i++){
        aux = temp[i];
        char lim = 0;

        if(aux > 100) lim = 3;
        else lim = 2;

        memset(buff, 0, sizeof(buff));
        for(int j = 0; j < lim; j++){
            buff[j] = aux%10;
            aux /= 10;
        }
        CAN0.sendMsgBuf(i + MAX_CELULAS, 0, 8, buff);
    }


    if(isMain){
        for(int i = 0; i < MAX_CELULAS; i++){
            aux = _celula[i]*100;

            memset(buff, 0, sizeof(buff));
            for(int j = 0; j < 3; j++){
                buff[j] = aux%10;
                aux /= 10;

            }
            CAN0.sendMsgBuf(i, 0, 8, buff);
        }
        for(int i = 0; i < MAX_PTC; i++){
            aux = _temp[i];
            char lim = 0;

            if(aux > 100) lim = 3;
            else lim = 2;

            memset(buff, 0, sizeof(buff));
            for(int j = 0; j < lim; j++){
                buff[j] = aux%10;
                aux /= 10;
            }
            CAN0.sendMsgBuf(i + MAX_CELULAS, 0, 8, buff);
        }
    }
}

void BMS::CANReceive(){
    unsigned char len = 0, *i;
    unsigned char buff[8];
    int aux;

    if(CAN_MSGAVAIL == CAN.checkReceive()){
        CAN.readMsgBuf(&len, buff);

        unsigned char canId = CAN.getCanId

        aux = buff[2]*100 + buff[1]*10 + buff[0];

        if(canId < MAX_CELULAS)
            _celula[canId] = aux/100;
        else
            _temp[canId - MAX_CELULAS];
    }
}

float BMS::getTensaoTotal(){
    for(int i = 0; i < MAX_CELULAS; i++)
        tensaoTotal += (celula[i] + _celula[i]);

    return tensaoTotal;
}

float BMS::getTensaoMedia(){
    return(tensaoTotal/(MAX_CELULAS*2));
}

int BMS::getTemperaturaMedia(){
    for(int i = 0; i < MAX_PTC; i++)
        temperatura = (temp[i] + _temp[i]);

    return (temperaturaMedia/(MAX_PTC*2));
}

void BMS::DisplaySend(){

    int parc = getTensaoTotal()*10000;

    lcd.setCursor(0,0);
    lcd.print("T = ");
    lcd.setCursor(4,0);
    lcd.print(parc/100);
    lcd.setCursor(7,0);
    lcd.print('.');
    lcd.setCursor(8,0);
    lcd.print(parc%100);

    lcd.setCursor(0, 1);
    lcd.print("t = ");
    lcd.setCursor(4,0);
    lcd.print(getTemperaturaMedia());
    lcd.setCursor(8,0);
    lcd.print("A = ");
    lcd.print(corrente);
}




