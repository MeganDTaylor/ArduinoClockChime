// =======================
// NOTE DEFINITIONS
// =======================
#define C4  262
#define D4  294
#define E4  330
#define F4  349
#define G4  392
#define A4  440
#define Bb4 466
#define B4  494
#define C5  523
#define D5  587
#define Eb4 311
#define Eb5 622
#define Ab4 415
#define A3 220
#define Bb3 233
#define Cs4 277
#define Fs4 370
#define F2  87
#define A2  110
#define Bb2 117
#define B2  123
#define C3  131
#define Cs3 139
#define D3  147
#define Eb3 156
#define E3  165
#define F3  175
#define Fs3 185
#define G3  196
#define Ab3 208
#define A3  220
#define Bb3 233
#define B3  247


// =======================
// DURATIONS
// =======================
const int q  = 600;
const int h  = q * 2;
const int w  = q * 4;
const int s  = (q * 1) / 4;
const int e  = (q * 2) / 4;
const int dq = (q * 3) / 2;
const int he = h + e;
const int dh = h + q;

// =======================
// SONG STATE STRUCTURE
// =======================
struct SongState {
  const int *notes1;
  const int *dur1;
  int len1;

  const int *notes2;
  const int *dur2;
  int len2;

  const int *notes3;
  const int *dur3;
  int len3;

  int i1 = 0;
  int i2 = 0;
  int i3 = 0;

  unsigned long next1 = 0;
  unsigned long next2 = 0;
  unsigned long next3 = 0;

  bool active = false;
};


SongState song;

// =======================
// LEDC Setup
// =======================
const int BUZZER1_PIN = 13;
const int BUZZER2_PIN = 26;
const int BUZZER3_PIN = 27;

const int CH1 = 0;
const int CH2 = 2;
const int CH3 = 4;

// =======================
// Start any song
// =======================
void startSong(const int *n1, const int *d1, int len1,
               const int *n2, const int *d2, int len2,
               const int *n3, const int *d3, int len3) {
  song.notes1 = n1;
  song.dur1   = d1;
  song.len1   = len1;

  song.notes2 = n2;
  song.dur2   = d2;
  song.len2   = len2;

  song.notes3 = n3;
  song.dur3   = d3;
  song.len3   = len3;

  song.i1 = 0;
  song.i2 = 0;
  song.i3 = 0;

  unsigned long now = millis();
  song.next1 = now;
  song.next2 = now;
  song.next3 = now;

  song.active = true;
}

// =======================
// Call repeatedly
// =======================
void runSong() {
  if (!song.active) return;

  unsigned long now = millis();

  // Voice 1
  if (song.i1 < song.len1 && now >= song.next1) {
    int freq = song.notes1[song.i1];
    if (freq > 0) ledcWriteTone(CH1, freq);
    else ledcWriteTone(CH1, 0);

    // schedule end of this note
    song.next1 = now + (unsigned long)song.dur1[song.i1];
    song.i1++;
  } else {
    // only silence if we've passed the last note AND its scheduled end time
    if (song.i1 >= song.len1 && now >= song.next1) {
      ledcWriteTone(CH1, 0);
    }
  }
  // Voice 2
  if (song.i2 < song.len2 && now >= song.next2) {
    int freq = song.notes2[song.i2];
    if (freq > 0) ledcWriteTone(CH2, freq);
    else ledcWriteTone(CH2, 0);

    song.next2 = now + (unsigned long)song.dur2[song.i2];
    song.i2++;
  } else {
    if (song.i2 >= song.len2 && now >= song.next2) {
      ledcWriteTone(CH2, 0);
    }
  }

  // Voice 3
  if (song.i3 < song.len3 && now >= song.next3) {
    int freq = song.notes3[song.i3];
    if (freq > 0) ledcWriteTone(CH3, freq);
    else ledcWriteTone(CH3, 0);

    song.next3 = now + (unsigned long)song.dur3[song.i3];
    song.i3++;
  } else {
    if (song.i3 >= song.len3 && now >= song.next3) {
      ledcWriteTone(CH3, 0);
    }
  }
  // End condition — only stop when ALL voices have played their final durations
  if (song.i1 >= song.len1 && song.i2 >= song.len2 && song.i3 >= song.len3
      && now >= song.next1 && now >= song.next2 && now >= song.next3) {
    song.active = false;
  }
}

// =======================
// SETUP + LOOP
// =======================
void setup() {
  connectWiFi();   // Auto-connect
  initTime();
  
  ledcSetup(CH1, 0, 12);
  ledcAttachPin(BUZZER1_PIN, CH1);
  ledcSetup(CH2, 0, 12);
  ledcAttachPin(BUZZER2_PIN, CH2);
  ledcSetup(CH3, 0, 12);
  ledcAttachPin(BUZZER3_PIN, CH3);

}

void loop() {
  // Update the currently playing song
  runSong();

  // Example: Play something daily at 18:45
  if (isTime(15, 00)) {playSong_AngelsWeHaveHeardOnHigh();}
  if (isTime(16, 00)) {playSong_HowGreatThouArt();}
  if (isTime(17, 00)){playSong_AngelsWeHaveHeardOnHigh();}
  if (isTime(18, 00)) {playSong_HowGreatThouArt();}
  if (isTime(19, 00)) {playSong_AngelsWeHaveHeardOnHigh();}
  if (isTime(20, 00)){playSong_HowGreatThouArt();}
  if (isTimeAndDay(9, 30, 0)){playSong_WestminsterChimes();}
  if (isTimeAndDay(20, 33, 0)){playSong_WestminsterChimes();}

  
}
