#ifndef WestminsterChimes
#define WestminsterChimes

// =======================
// SONG 3: Westminster Chimes
// =======================
void playSong_WestminsterChimes() {
  const int q  = 600;
  const int h  = q * 2;
  const int w  = q * 4;
  const int s  = (q * 1) / 4;
  const int e  = (q * 2) / 4;
  const int dq = (q * 3) / 2;
  const int he = h + e;
  const int dh = h + q;
  const int dqe = dq + e;
  const int dqq = dq + q;
  const int de = (e * 3) / 2;
  const int dee = de + e;
  const int wh = w + h;  // ---------- Soprano ----------
  static const int sopNotes[] = {
    F4,A4,G4,C4,C4,G4,A4,F4,A4,G4,F4,C4,C4,G4,A4,F4
  };
  static const int sopDur[] = {
    h,h,h,w,h,h,h,w,h,h,h,w,h,h,h,w
  };

  // ---------- Alto ----------
  static const int altoNotes[] = {
    F4,A4,G4,C4,C4,G4,A4,F4,A4,G4,F4,C4,C4,G4,A4,F4 

  };
  static const int altoDur[] = {
    h,h,h,w,h,h,h,w,h,h,h,w,h,h,h,w
  };

  // ---------- Bass ----------
  static const int bassNotes[] = {
    F4,A4,G4,C4,C4,G4,A4,F4,A4,G4,F4,C4,C4,G4,A4,F4
  };
  static const int bassDur[] = {
    h,h,h,w,h,h,h,w,h,h,h,w,h,h,h,w
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

#endif
