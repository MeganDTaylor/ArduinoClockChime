#ifndef HowGreatThouArt
#define HowGreatThouArt

// =======================
// SONG 1: HOW GREAT THOU ART
// =======================
void playSong_HowGreatThouArt() {
  // ---------- Soprano ----------
  static const int sopNotes[] = {
    F4, F4, F4, D4, F4, F4, F4, G4, G4, Eb4, G4, G4, G4, G4, F4, D4, F4, F4, 
    Eb4, Eb4, D4, F4, F4, F4, D4, F4, F4, F4, G4, G4, Eb4, G4, G4, G4, G4, F4, 
    D4, F4, F4, Eb4, Eb4, D4, F4, F4, Bb4, D5, C5, Bb4, A4, Bb4, G4, F4, Bb4, Bb4, 
    A4, C4, Eb4, G4, F4, D4, F4, F4, Bb4, D5, C5, Bb4, A4, Bb4, G4, F4, Bb4, A4, 
    Bb4, C5, D5, Eb5, A4, Bb4
  };
  static const int sopDur[] = {
    e,e,e,dq,e,e,e,e,e,q,dq,e,e,e,dq,e,e,e,e,e,he,
    e,e,e,dq,e,e,e,e,e,q,dq,e,e,e,dq,e,e,e,e,e,he,
    e,e,e,dq,e,e,e,e,e,he,e,e,e,he,e,e,e,he,e,e,e,
    dq,e,e,e,e,e,he,e,e,e,he,e,q,e,he
  };

  // ---------- Alto ----------
  static const int altoNotes[] = {
    D4, D4, D4, Bb3, D4, Eb4, Bb3, Eb4, Eb4, Bb3, Eb4, Eb4, Eb4, Cs4, D4, Bb3,
    D4, D4, C4, A3, Bb3,  D4, D4, D4, Bb3, D4, Eb4, Bb3, Eb4, Eb4, Bb3, Eb4,
    Eb4, Eb4, Cs4, D4, Bb3, D4, D4, C4, A3, Bb3,  D4, D4, D4, F4, Ab4, G4, Fs4,
    G4, E4, D4, D4, D4, Eb4, A3, C4, Eb4, C4, Bb3, D4, D4, D4, F4, Ab4, G4, Fs4,
    G4, Eb4, D4, D4, Eb4, F4, G4, F4, G4, Eb4, D4  

  };
  static const int altoDur[] = {
    e,e,e,dq,e,e,e,e,e,q,dq,e,e,e,dq,e,e,e,e,e,he,
    e,e,e,dq,e,e,e,e,e,q,dq,e,e,e,dq,e,e,e,e,e,he,
    e,e,e,dq,e,e,e,e,e,he,e,e,e,he,e,e,e,he,e,e,e,
    dq,e,e,e,e,e,he,e,e,e,he,e,q,e,he
  };

  // ---------- Bass ----------
  static const int bassNotes[] = {
    Bb2,Bb2,Bb2,Bb2,Bb2,C3,D3,Eb3,Eb3,Eb3,
    Eb3,Eb3,E3,F3,F3,F2,F2,F2,F2,Bb2,
    Bb2,Bb2,Bb2,Bb2,Bb2,C3,D3,Eb3,Eb3,Eb3,
    Eb3,Eb3,E3,F3,F3,F2,F2,F2,F2,Bb2,
    Bb2,Bb2,Bb2,Bb2,D3,Eb3,Eb3,Eb3,Eb3,Bb2,
    Bb2,F3,F3,F2,F2,F2,F2,Bb2,Bb2,Bb2,Bb2,
    Bb2,D3,Eb3,Eb3,Eb3,Eb3,Bb2,Bb2,C3,D3,Eb3,D3,C3,F3,Bb2
  };
  static const int bassDur[] = {
    e,e,e,dq,e,e,e,e,e,q,dq,e,e,e,dq,e,e,e,e,e,he,
    e,e,e,dq,e,e,e,e,e,q,dq,e,e,e,dq,e,e,e,e,e,he,
    e,e,e,dq,e,e,e,e,e,he,e,e,e,he,e,e,e,he,e,e,e,
    dq,e,e,e,e,e,he,e,e,e,he,e,q,e,he
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

#endif
