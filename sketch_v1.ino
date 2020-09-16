#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>
int switchReed=6;
//
void setup () {
  Serial.begin (9600);
  mp3_set_serial (Serial);  //set Serial for DFPlayer-mini mp3 module 
  mp3_set_volume (15);
  pinMode(switchReed, INPUT);
  Serial.begin(9600);
}


//
void loop () { 
  if (digitalRead(switchReed)==HIGH){       
  mp3_play (1);
  delay (6000);
  }
  
  else {
  mp3_play (2);
  delay (6000);
  }
  delay(1);  
}