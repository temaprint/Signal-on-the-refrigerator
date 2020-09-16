#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

#define tracks_max 8 // всего треков 4, от 0 до 8
#define tracks_plays 2 // сколько раз воспроизводить
#define tracks_delay 3000 // задержка#define tracks_max 8; // всего треков 4, от 0 до 3

int switchReed=6;
int track = 0; // обьявим переменную
int i = 0; // вспомогательная переменная для цикла


//
void setup () {
  Serial.begin (9600);
  mp3_set_serial (Serial); 
  mp3_set_volume (25);
  pinMode(switchReed, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


//
void loop () { 
  if (digitalRead(switchReed)==HIGH){   
    for (i = 0; i < tracks_plays; i++ ){ //
            track = random(tracks_max);
            mp3_play(track);
            delay(tracks_delay);
    }
  }

  
  else {
    mp3_pause ();
  }
    delay(1);  
}
