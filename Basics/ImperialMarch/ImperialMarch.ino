/*
 Imperial March for Arduino

 */

int Note_e = 156;
int Note_eb = 165;
int Note_g = 196;
int Note_gb = 185;
int Note_ab = 208;
int Note_a = 220;
int Note_bb = 233;
int Note_b = 247;
int Note_c = 262;
int Note_csharp = 277; 
int Note_d = 294;
int Note_2eb = 311;
int Note_2e = 330;
int Note_3f = 349;
int Note_3gb = 370;
int Note_3g = 392;

// The notes for the melody
int melody[] = {
  Note_g, Note_g, Note_g, Note_e, Note_bb, Note_g, Note_e, Note_bb, Note_g, 
  Note_d, Note_d, Note_d, Note_2eb, Note_bb, Note_gb, Note_e, Note_bb, Note_g,
  Note_3g, Note_g, Note_g, Note_3g, Note_3gb, Note_3f, Note_2eb, Note_d, Note_2eb, 0,
  Note_gb, Note_c, Note_b, Note_bb, Note_a, Note_ab, Note_a, 0,
  Note_e, Note_gb, Note_e, Note_gb, Note_bb, Note_g, Note_bb, Note_d,
  Note_3g, Note_g, Note_g, Note_3g, Note_3gb, Note_3f, Note_2eb, Note_d, Note_2eb, 0,
  Note_gb, Note_c, Note_b, Note_bb, Note_a, Note_ab, Note_a, 0,
  Note_e, Note_gb, Note_e, Note_bb, Note_g, Note_e, Note_bb, Note_g
};


// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteLengths[] = {
  2, 2, 2, 3, 8, 2, 3, 8, 1,
  2, 2, 2, 3, 8, 2, 3, 8, 1,
  2, 3, 8, 2, 3, 8, 8, 8, 4, 4,
  4, 2, 3, 8, 8, 8, 4, 4,
  4, 2, 3, 8, 2, 3, 8, 1,
  2, 3, 8, 2, 3, 8, 8, 8, 4, 4,
  4, 2, 3, 8, 8, 8, 4, 4,
  4, 2, 3, 8, 2, 3, 8, 1
};

int melodyLength = sizeof(melody);

void setup() {
  // iterate over each note of the melody, hence, sizeof(Array)
  for (int currentNote = 0; currentNote < sizeof(melody); currentNote++) {

    // 1 second divided by the note length
    int noteLength = 1000 / noteLengths[currentNote];
    tone(8, melody[currentNote], noteLength);

    // need a delay between each note, otherwise everything will be played instantly
    int pauseBetweenNotes = noteLength;
    delay(pauseBetweenNotes);
    
    // end playing
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
