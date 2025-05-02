// Define the pin for the piezo buzzer
const int buzzerPin = 8;
#include "pitches.h"



int melodyINTRO[] = {
  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,
  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,
};

// Durations of each note (4 = quarter note, 8 = eighth note, etc.)
int noteDurations1[] = {
  4, 4, 4, 4,
  4, 4, 4, 4,  
};

int melody[] = {
  NOTE_G4, NOTE_G4, 
  
  NOTE_E4, NOTE_E4,
  
  NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_B4,

  NOTE_CS4, NOTE_CS4, //check 4

  NOTE_G4, NOTE_G4, 
  
  NOTE_E4, NOTE_E4,
  
  NOTE_B4, NOTE_G4, NOTE_FS4, NOTE_B4,

  NOTE_C5, NOTE_C5, 

  NOTE_G4, NOTE_G4, 
  
  NOTE_E4, NOTE_E4,
  
  NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_B4,

  NOTE_CS4, NOTE_CS4, //CHECK 12

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,
  
  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

  NOTE_C4, NOTE_C4,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,
  
  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

  NOTE_G4, NOTE_G4, //20
  
  NOTE_E4, NOTE_E4,
  
  NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_B4,

  NOTE_CS4, NOTE_CS4, 

  NOTE_G4, NOTE_G4, //24
  
  NOTE_E4, NOTE_E4,
  
  NOTE_B4, NOTE_G4, NOTE_FS4, NOTE_B4,

  NOTE_C5, NOTE_C5,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,
  
  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6, //30
 
  NOTE_CS4, NOTE_CS4, 

  NOTE_G4, NOTE_G4, 
  
  NOTE_E4, NOTE_E4, 

  NOTE_B4, NOTE_G4, NOTE_FS4, NOTE_B4, //35

  NOTE_C4, NOTE_C4,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,
  
  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,
 
  NOTE_C5, NOTE_G6, NOTE_B6, NOTE_FS6,

};

// Durations of each note (4 = quarter note, 8 = eighth note, etc.)
int noteDurations[] = {
  2,2,

  2,2,
  
  4,4,4,4,
  
  2,2,   //CHECK 4
  
  2,2, 
  
  2,2,
  
  4,4,4,4,
  
  2,2,
  
  2,2, 
  
  2,2,
  
  4,4,4,4,
  
  2,2, //CHECK 12
  
  4,4,4,4,

  4,4,4,4,

  4,4,4,4,

  2, 2,

  4,4,4,4,

  4,4,4,4,

  4,4,4,4,

  4,4,4,4,

  2,2, //20

  2,2,
  
  4,4,4,4,
  
  2,2,   
  
  2,2, //24
  
  2,2,
  
  4,4,4,4,
  
  2,2,
   
  4,4,4,4,

  4,4,4,4,

  4,4,4,4, //30

  2,2,
  
  2,2, 
  
  2,2,

  4,4,4,4,
  
  2,2,
   
  4,4,4,4,

  4,4,4,4,

  4,4,4,4,

  4, 4, 4, 4,

};

void setup() {
  for (int i = 0; i < sizeof(melodyINTRO) / sizeof(melodyINTRO[0]); i++) {
    int noteDuration1 = 1000 / noteDurations1[i];
    tone(buzzerPin, melodyINTRO[i], noteDuration1); // Play the note
    delay(noteDuration1 * 2);                 // Pause between notes
    noTone(buzzerPin);
}
}

void loop() {
   for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int noteDuration = 1000 / noteDurations[i];
    tone(buzzerPin, melody[i], noteDuration); // Play the note
    delay(noteDuration * 2);                 // Pause between notes
    noTone(buzzerPin);
}
}
