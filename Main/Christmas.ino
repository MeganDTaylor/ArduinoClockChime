#ifndef Christmas
#define Christmas

// =======================
// SONG 2: Angels We Have Heard On High
// =======================
void playSong_AngelsWeHaveHeardOnHigh() {
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
  const int wh = w + h;
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

// =======================
// SONG: JOY TO THE WORLD
// =======================
void playSong_JoyToTheWorld() {
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
  // D5 c5 b a g f e d | a b b c5 c5 d5 d5 | d5 c5 b a a g f d5 d5 | c5 b a a g f | f f f f f g a g f | e e e e f g f e | d d5 b a g f g f e d 
  static const int sopNotes[] = {
    D5, Cs5, B4, A4, G4, Fs4, E4, D4, 
    A4, B4, B4, Cs5, Cs5, D5, D5, 
    D5, Cs5, B4, A4, A4, G4, Fs4, D5, D5, Cs5, B4, A4, A4, G4, Fs4, 
    Fs4, Fs4, Fs4, Fs4, Fs4, G4, A4, G4, Fs4, 
    E4, E4, E4, E4, Fs4, G4, Fs4, E4, 
    D4, D5, B4, A4, G4, Fs4, G4, Fs4, E4, D4
  };
  static const int sopDur[] = {
    q, de, s, dq, e, q, q, dq,
    e, dq, e, dq, e, dq, e,
    e, e, e, e, de, s, e, e, e, e, e, e, de, s, e,
    e, e, e, e, s, s, dq, s, s, 
    e, e, e, s, s, dq, s, s,
    e, q, e, de, s, e, e, q, q, h
  };

  // ---------- Alto ----------
  // F a g f e d c d | A g g e e f f | F a g f f e d f f a g f f e d | D d d d d e f e d | C c c c d e d c | D f g f e d e d c d
  static const int altoNotes[] = {
    Fs4, A4, G4, Fs4, E4, D4, Cs4, D4,
    A4, G4, G4, E4, E4, Fs4, Fs4,
    Fs4, A4, G4, Fs4, Fs4, E4, D4, Fs4, Fs4, A4, G4, Fs4, Fs4, E4, D4,
    D4, D4, D4, D4, D4, E4, Fs4, E4, D4,
    Cs4, Cs4, Cs4, Cs4, D4, E4, D4, Cs4,
    D4, Fs4, G4, Fs4, E4, D4, E4, D4, Cs4, D4
  };
  static const int altoDur[] = {
    q, de, s, dq, e, q, q, dq,
    e, dq, e, dq, e, dq, e,
    e, e, e, e, de, s, e, e, e, e, e, e, de, s, e,
    e, e, e, e, s, s, dq, s, s, 
    e, e, e, s, s, dq, s, s,
    e, q, e, de, s, e, e, q, q, h
  };

  // ---------- Bass (Strict Octaves as Provided) ----------
  // D4 d4 d4 d4 b a g f | D4 d4 d4 a a a a | A d4 d4 a a a d4 d4 a | 0 0 0 a a a a a | A3 a2 a2 a2 a2 a2 | F A d4 d4 b a a g f
  static const int bassNotes[] = {
    D4, D4, D4, D4, B3, A3, G3, Fs3,
    D4, D4, D4, A3, A3, A3, A3,
    A3, D4, D4, A3, A3, A3, D4, D4, A3,
    0, 0, 0, A3, A3, A3, A3, A3, // Rests as requested
    A3, A2, A2, A2, A2, A2,       // Kept a2 as requested
    Fs3, A3, D4, D4, B3, A3, A3, G3, Fs3
  };
  static const int bassDur[] = {
    q, de, s, dq, e, dq, e, dq,
    e, dq, e, dq, e, dq, e,
    q, q, q, e, e, q, q, q, e,
    e, q, e, e, e, e, e, e,
    dq, e, e, e, e, e,
    e, q, e, dq, e, q, e, e, h
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}


// =======================
// SONG: O COME ALL YE FAITHFUL
// =======================
void playSong_OComeAllYeFaithful() {
  const int q  = 700;
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
    G4, G4, D4, G4, A4, D4, B4, A4, B4, C5, B4, A4, G4, 
    G4, Fs4, E4, Fs4, G4, A4, B4, Fs4, E4, D4, D4, 
    D5, C5, B4, C5, B4, A4, B4, G4, A4, Fs4, E4, D4,
    G4, G4, Fs4, G4, A4, G4, D4, B4, B4, A4, B4, C5, B4, A4, 
    B4, C5, B4, A4, G4, Fs4, G4, C5, B4, A4, G4, G4
  };
  static const int sopDur[] = {
    q,h,q,q,h,h,q,q,q,q,h,q,q,
    h,q,q,q,q,q,q,h,dq,e,w,
    h,q,q,h,h,q,q,q,q,dq,e,q,
    q,q,q,q,q,h,q,q,q,q,q,q,h,q,
    q,q,q,q,q,h,q,q,h,dq,e,w
  };

  // ---------- Alto ----------
  // Notes: dddddddddeddbbcsdcsdddcsdddefggfgaaeeddggfgagddddddddgefgddcsddedbb
  static const int altoNotes[] = {
    D4, D4, D4, D4, D4, D4, D4, D4, D4, E4, D4, D4, B3, 
    B3, Cs4, D4, Cs4, D4, D4, D4, Cs4, D4, D4,
    D4, E4, Fs4, G4, G4, Fs4, G4, D4, D4, E4, E4, D4, D4,
    G4, G4, Fs4, G4, A4, G4, D4, D4, D4, D4, D4, D4, D4, D4,
    G4, E4, Fs4, G4, D4, D4, Cs4, D4, D4, E4, D4, B3, B3
  };
  static const int altoDur[] = {
    q,h,q,q,h,h,q,q,q,q,h,q,q,
    q,q,q,q,h,h,h,dq,e,w,
    h,e,e,q,q,q,h,q,q,q,q,h,q,
    q,q,q,q,q,h,q,q,q,q,q,q,h,q,
    q,e,e,q,q,e,e,h,q,q,h+dq,e,w
  };

  // ---------- Bass ----------
  // Notes: bbbbaagagggfggaagfeagffbcdcdagbcagfggfgagdggfgagdfcdaaaggfgg
  static const int bassNotes[] = {
    B3, B3, B3, B3, A3, A3, G3, A3, G3, G3, G3, Fs3, G3,
    G3, A3, A3, G3, Fs3, E3, A3, G3, Fs3, Fs3,
    B3, C4, D4, C4, D4, A3, G3, B3, C4, A3, G3, B3,
    G4, G4, Fs4, G4, A4, G4, D4, G3, G3, Fs3, G3, A3, G3,
    D4, C4, D4, A3, A3, A3, G3, G3, Fs3, G3, G3
  };
  static const int bassDur[] = {
    q,h,q,q,h,h,q,q,q,q,h,q,q,
    h,h,q,q,q,q,h,dq,e,w,
    h,q,q,h,h,q,q,q,q,dq,e,q,
    q,q,q,q,q,h,q,q,q,q,q,q,h,q,
    q,q,q,q,q,h,h,h,dq,e,w
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}


// =======================
// SONG: SILENT NIGHT
// =======================
void playSong_SilentNight() {
  const int q  = 800;
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
  const int wh = w + h;
  // ---------- Soprano ----------
  static const int sopNotes[] = {
    F4, G4, F4, D4, F4, G4, F4, D4, C5, C5, A4, Bb4, Bb4, F4,
    G4, G4, Bb4, A4, G4, F4, G4, F4, D4, G4, G4, Bb4, A4, G4, 
    F4, G4, F4, D4, C5, C5, Eb5, C5, A4, Bb4, D5, Bb4, F4, D4, F4, Eb4, C4, Bb3
  };
  static const int sopDur[] = {
    de, s, e, dq, de, s, e, dq, q, e, dq, q, e, dq,
    q, e, de, s, e, de, s, e, dq, q, e, de, s, e, 
    de, s, e, dq, q, e, de, s, e, dq, dq, e, e, e, de, s, e, dq+dq
  };

  // ---------- Alto ----------
  static const int altoNotes[] = {
    D4, Eb4, D4, Bb3, D4, Eb4, D4, Bb3, Eb4, Eb4, Eb4, D4, D4, D4,
    Eb4, Eb4, G4, F4, Eb4, D4, Eb4, D4, Bb3, Bb3, Eb4, G4, F4, Eb4, 
    D4, Eb4, D4, Bb3, Eb4, Eb4, C4, Eb4, C4, D4, F4, D4, D4, D4, A3, A3, A3, Bb3
  };
  static const int altoDur[] = {
    de, s, e, dq, de, s, e, dq, q, e, dq, q, e, dq,
    q, e, de, s, e, de, s, e, dq, q, e, de, s, e, 
    de, s, e, dq, q, e, de, s, e, dq, dq, e, e, e, de, s, e, dq+dq
  };

  // ---------- Bass ----------
  static const int bassNotes[] = {
    Bb3, Bb3, F3, Bb3, Bb3, F3, A3, A3, C4, Bb3, Bb3, Bb3,
    Bb3, Bb3, Eb4, Bb3, Bb3, Bb3, F3, Eb3, Bb3, Eb4, Bb3,
    Bb3, Bb3, F3, A3, A3, A3, A3, F3, F3, Bb3, Bb3, F3, F3, F3, Eb3, D3
  };
  static const int bassDur[] = {
    q, e, dq, q, e, dq, q,e,dq,q,e,dq,q,e,q,e,q,e,dq,q,e,q,e,q,e,dq,q,e,de,s,e,dq,dq,q,e,de,s,e,dq+dq
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}


// =======================
// SONG: THE FIRST NOEL
// =======================
void playSong_TheFirstNoel() {
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
    Fs4, E4, D4, E4, Fs4, G4, A4, B4, Cs5, D5, Cs5, B4, A4, B4, Cs5, D5, Cs5, B4,
    A4, B4, Cs5, D5, A4, G4, Fs4, Fs4, E4, D4, E4, Fs4, G4, A4, B4, Cs5,
    D5, Cs5, B4, A4, B4, Cs5, D5, Cs5, B4, A4, B4, Cs5, D5, A4, G4, Fs4,
    Fs4, E4, D4, E4, Fs4, G4, A4, D5, Cs5, B4, B4, A4, D5, Cs5, B4, A4, B4, Cs5, D5, A4, G4, Fs4
  };
  static const int sopDur[] = {
    e, e, dq, e, e, e, h, e, e, q, q, q, h, e, e, q, q, q,
    q, q, q, q, q, q, h, e, e, dq, e, e, e, h, e, e,
    q, q, q, h, e, e, q, q, q, q, q, q, q, q, q, h,
    e, e, dq, e, e, e, h, e, e, h, q, dh, q, q, q, q, q, q, q, q, q, q, h
  };

  // ---------- Alto ----------
  // D a d e e a g f d e a f g A d g f e d c a d e e A g f d e a f g a g g f e d C a d c f g g f a f f g f g f e d
  static const int altoNotes[] = {
    D4, A3, D4, E4, E4, A4, G4, Fs4, D4, E4, A4, Fs4, G4,
    A4, D4, G4, Fs4, E4, D4, Cs4, A3, D4, E4, E4,
    A4, G4, Fs4, D4, E4, A4, Fs4, G4, A4, G4, G4, Fs4, E4, D4,
    Cs4, A3, D4, Cs4, Fs4, G4, G4, Fs4, A4, Fs4, Fs4, G4, Fs4, G4, Fs4, E4, D4
  };
  static const int altoDur[] = {
    q, h, q, h, q, h, q, h, e, e, q, q, q,
    q, q, q, h, q, h, q, h, q, h, q,
    h, q, h, e, e, q, q, q, q, q, q, h, q, h,
    q, h, q, h, q, h, q, h, q, q, q, q, h, q, h, q, h
  };

 // ---------- Bass (Octave 3 & 4) ----------
  // A g f d c b a b c d b a a c D b g a d a a a g f d d c b F b c d b a a c d e a d a a A g f b a a b c d e f e d d d d g a a a
  static const int bassNotes[] = {
    A3, G3, Fs3, D3, Cs4, B3, A3, B3, Cs4, D4, B3, A3, A3, Cs4,
    D4, B3, G3, A3, D4, A3, A3, A3, G3, Fs3, D4, D4, Cs3, B3,
    Fs3, B3, Cs4, D4, B3, A3, A3, Cs4, D4, E4, A3, D4, A3, A3,
    A3, G3, Fs3, B3, A3, A3, B3, Cs4, D4, E4, Fs4, E4, D4, D4, D4, D4, G3, A3, A3, A3
  };
  static const int bassDur[] = {
    e, e, h, q, h, q, h, e, e, h, e, e, h, q,
    q, q, q, q, q, q, h, e, e, h, q, q, q, q,
    h, e, e, h, e, e, h, q, h, q, q, q, q, h,
    e, e, h, q, h, q, dq, e, e, e, h, q, q, q, q, h, q, h, q, h
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

#endif
