#ifndef AngelsWeHaveHeardOnHigh
#define AngelsWeHaveHeardOnHigh

// =======================
// SONG 2: Angels We Have Heard On High
// =======================
void playSong_AngelsWeHaveHeardOnHigh() {
  // ---------- Soprano ----------
  static const int sopNotes[] = {
    A4,A4,A4,C5,C5,Bb4,A4,A4,G4,A4,C5,A4,G4,F4,
    A4,A4,A4,C5,C5,Bb4,A4,A4,G4,A4,C5,A4,G4,F4,
    C5,D5,C5,Bb4,A4,Bb4,C5,Bb4,A4,G4,A4,Bb4,A4,G4,F4,G4,G4,C4,F4,G4,A4,Bb4,A4,G4,
    C5,D5,C5,Bb4,A4,Bb4,C5,Bb4,A4,G4,A4,Bb4,A4,G4,F4,G4,G4,C4,F4,G4,A4,Bb4,A4,G4,F4

  };
  static const int sopDur[] = {
    q,q,q,q,dq,e,h,q,q,q,q,dq,e,h,
    q,q,q,q,dq,e,h,q,q,q,q,dq,e,h,
    h,e,e,e,e,h,e,e,e,e,h,e,e,e,e,dq,e,h,q,q,q,q,h,h,
    h,e,e,e,e,h,e,e,e,e,h,e,e,e,e,dq,e,h,q,q,q,q,h,h,w

  };

  // ---------- Alto ----------
  static const int altoNotes[] = {
    F4,F4,E4,E4,G4,E4,F4,F4,E4,F4,F4,F4,E4,F4,
    F4,F4,E4,E4,G4,E4,F4,F4,E4,F4,F4,F4,E4,F4,
    C5,Bb4,A4,G4,F4,A4,G4,F4,E4,G4,F4,E4,D4,C4,B4,C4,C4,C4,C4,F4,F4,E4,
    C5,Bb4,A4,G4,F4,A4,G4,F4,E4,G4,F4,E4,D4,C4,B4,C4,C4,C4,C4,F4,F4,E4,C4

  };
  static const int altoDur[] = {
    q,q,q,q,q,q,h,q,q,q,q,q,q,h,
    q,q,q,q,q,q,h,q,q,q,q,q,q,h,
    e,e,e,e,he,e,e,e,he,e,e,e,h,q,q,h,q,q,q,q,h,h,
    e,e,e,e,he,e,e,e,he,e,e,e,h,q,q,h,q,q,q,q,dh,q,w
  };

  // ---------- Bass ----------
  static const int bassNotes[] = {
    F3,F3,A3,A3,G3,C3,F3,F3,C3,F3,A3,C4,Bb3,A3,
    D3,A2,D3,C3,F3,C3,F3,A2,C3,F3,A3,C4,Bb3,A3,
    F3,D3,F3,G3,C3,E3,F3,Bb2,D3,E3,D3,C4,Bb3,A2,G3,A2,C3,F3,Bb2,C3,C4,Bb3,
    A3,F3,D3,F3,G3,C3,E3,F3,Bb2,D3,C3,D3,E3,D3,C3,Bb2,A2,C3,F3,Bb2,C3,F3

  };
  static const int bassDur[] = {
    q,q,q,q,q,q,h,q,q,q,q,dq,e,h,
    q,q,q,q,q,q,h,q,q,q,q,dq,e,h,
    h,q,q,h,q,q,h,q,q,q,q,e,e,e,e,q,q,q,q,h,q,q,
    q,q,q,q,h,q,q,h,q,q,q,q,e,e,e,e,q,q,q,q,w,w
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

#endif
