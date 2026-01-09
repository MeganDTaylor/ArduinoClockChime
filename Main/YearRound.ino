#ifndef YearRound
#define YearRound

// =======================
// SONG: AMAZING GRACE
// =======================
void playSong_AmazingGrace() {
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
  const int wh = w + h;
  // ---------- Soprano ----------
  // C f a f a g f d c c f a f a g c a c a c a f c d f f d c c f a f a g f
  static const int sopNotes[] = {
    C4, F4, A4, F4, A4, G4, F4, D4, C4, C4, F4, A4, F4, A4, G4, C5,
    A4, C5, A4, C5, A4, F4, C4, D4, F4, F4, D4, C4, C4, F4, A4, F4, A4, G4, F4
  };
  static const int sopDur[] = {
    q, h, e, e, h, q, h, q, h, q, h, e, e, h, q, h,
    q, dq, e, e, e, h, q, dq, e, e, e, h, q, h, e, e, h, q, h
  };

  // ---------- Alto ----------
  // A a c c b a b a a a c c c c c c c c c b c b a c a c c b a
  static const int altoNotes[] = {
    A3, A3, C4, C4, Bb3, A3, Bb3, A3, A3, A3, C4, C4, C4, C4, C4, C4,
    C4, C4, C4, Bb3, C4, Bb3, A3, C4, A3, C4, C4, Bb3, A3
  };
  static const int altoDur[] = {
    q, h, q, h, q, h, q, h, q, h, q, h, q, h, q, h,
    q, h, q, dq, e, q, h, q, h, q, h, q, h
  };

  // ---------- Bass ----------
  // f c f f e f f f f c f f e f f a f a f f f f d f f f f f a f e f
  static const int bassNotes[] = {
    F3, C3, F4, F4, E4, F4, F4, F4, F4, 
    C3, F4, F4, E4, F4, F4, A4, F4, A4, F4, F4, F4, 
    F4, D3, F4, F4, F4, F4, F4, A4, F4, E4, F4
  };
  static const int bassDur[] = {
    q, h, q, h, q, h, q, h, q, h, q, h, q, h, q, dq,
    e, e, e, h, q, h, e, e, h, q, h, e, e, h, q, h
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

// =======================
// SONG: BATTLE HYMN OF THE REPUBLIC
// =======================
void playSong_BattleHymn() {
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
  // ---------- Soprano (76 Notes) ----------
  static const int sopNotes[] = {
    F4, F4, F4, F4, Eb4, D4, F4, Bb4, C5, 
    D5, D5, D5, C5, Bb4, Bb4, A4, G4, G4, G4, A4,
    Bb4, A4, Bb4, G4, F4, G4, F4, D4, F4, F4, F4, 
    F4, F4, F4, Eb4, D4, F4, Bb4, C5, D5, D5, D5, C5, Bb4,
    Bb4, C5, C5, Bb4, A4, Bb4, F4, Eb4, D4, F4, Bb4, C5, 
    D5, Bb4, G4, A4, Bb4, A4, Bb4, G4, F4, D4, F4, Eb4, 
    D4, F4, Bb4, C5, D5, Bb4, Bb4, C5, C5, Bb4, A4, Bb4
  };
  static const int sopDur[] = {
    s, de, s, de, s, de, s, de, s, 
    de, s, de, s, q, de, s, de, s, de, s, 
    de, s, de, s, de, s, de, s, q, de, s, 
    de, s, de, s, de, s, de, s, de, s, de, s, q, 
    q, q, q, q, q, w,
    dq, e, de, s, de, s, 
    h, h, dq, e, de, s, de, s, h, h, dq, e, de, s, de, s, h, q, q, q, q, q, q, w 
  };

  // ---------- Alto (83 Notes) ----------
  static const int altoNotes[] = {
    D4, D4, D4, D4, C4, Bb3, D4, F4, F4, 
    F4, F4, F4, Eb4, D4, F4, F4, Eb4, Eb4, Eb4, F4,
    G4, F4, G4, Eb4, D4, Eb4, D4, Bb3, D4, D4, D4, 
    D4, D4, D4, C4, Bb3, D4, F4, F4, F4, F4, F4, Eb4, D4, 
    F4, G4, G4, F4, F4, F4, 
    D4, C4, Bb3, D4, D4, Eb4, 
    F4, F4, Eb4, F4, G4, F4, G4, Eb4, D4, Bb3, D4, C4,
    Bb3, D4, D4, Eb4, F4, F4, F4, G4, G4, F4, F4, F4
  };
  static const int altoDur[] = {
    s, de, s, de, s, de, s, de, s, 
    de, s, de, s, q, de, s, de, s, de, s, 
    de, s, de, s, de, s, de, s, q, de, s, 
    de, s, de, s, de, s, de, s, de, s, de, s, q, 
    q, q, q, q, q, w,
    dq, e, de, s, de, s, 
    h, h, dq, e, de, s, de, s, h, h, dq, e, de, s, de, s, h, q, q, q, q, q, q, w  
  };

  // ---------- Bass (82 Notes) ----------
  static const int bassNotes[] = {
    Bb3, Bb3, Bb3, Bb3, F3, F3, Bb3, Bb3, A3, Bb3, Bb3, Bb3, A3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3,
    Eb4, Eb4, Eb4, Bb3, Bb3, Bb3, Bb3, F3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, F3, F3, Bb3, Bb3, A3, Bb3, Bb3, Bb3, A3, Bb3,
    Bb3, Bb3, Eb4, D4, C4, D4, Bb3, Bb3, F3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, Bb3, F3, Bb3, Bb3, 
    F3, F3, F3, F3, Bb3, Bb3, Bb3, Eb4, C4, D4, Eb4, D4
  };
  static const int bassDur[] = {
    s, de, s, de, s, de, s, de, s, 
    de, s, de, s, q, de, s, de, s, de, s, 
    de, s, de, s, de, s, de, s, q, de, s, 
    de, s, de, s, de, s, de, s, de, s, de, s, q, 
    q, q, q, q, q, w,
    dq, e, de, s, de, s, 
    h, h, dq, e, de, s, de, s, h, h, dq, e, de, s, de, s, h, q, q, q, q, q, q, w 
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

// =======================
// SONG 1: HOW GREAT THOU ART
// =======================
void playSong_HowGreatThouArt() {
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

// =======================
// SONG 1: In The Garden
// =======================
void playSong_InTheGarden() {
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
    Eb4,Eb4,C4,Db4,Eb4,Ab4,Bb4,C5,Bb4,Ab4,Ab4,Ab4,Bb4,Ab4,F4,Ab4,Eb4,
    G4,Ab4,Bb4,Bb4,G4,F4,G4,Ab4,Bb4,C5,C5,Bb4,C5,Bb4,Ab4,G4,Ab4,Bb4,
    C5,Bb4,Ab4,Ab4,Ab4,G4,F4,G4,G4,G4,Eb4,Eb4,Db5,Db5,Db5,C5,B4,C5,Ab4,
    Bb4,C5,C5,Bb4,Bb4,G4,Ab4,Ab4,Ab4,F4,Eb4,Ab4,Ab4,G4,Bb4,Ab4
  };
  static const int sopDur[] = {
    e,e,e,e,e,e,e,dqe,e,e,q,e,e,e,e,dq,q,s,s,q,e,q,s,s,q,e,q,
    e,q,e,q,e,q,e,h,
    h,q,q,e,e,e,e,q,e,q,s,s,q,e,e,e,e,dqq,
    s,s,q,e,e,e,e,q,e,h,e,s,de,e,s,dee,w
  };

  // ---------- Alto ----------
  static const int altoNotes[] = {
    C4,C4,Ab3,Bb3,C4,C4,Db4,Eb4,Db4,Eb4,F4,F4,F4,F4,Db4,C4,C4,Bb4,C4,
    Db4,Db4,Db4,Db4,Db4,C4,Db4,Eb4,Eb4,D4,Eb4,Db4,Db4,Eb4,D4,Db4,
    Eb4,Db4,C4,C4,C4,C4,C4,Db4,Db4,Db4,Db4,Db4,F4,F4,F4,Eb4,D4,Eb4,C4,
    Db4,Eb4,Eb4,E4,E4,E4,F4,Gb4,F4,Db4,C4,C4,C4,Db4,Db4,C4

  };
  static const int altoDur[] = {
    e,e,e,e,e,e,e,dqe,e,e,q,e,e,e,e,dq,q,s,s,q,e,q,s,s,q,e,q,
    e,q,e,q,e,q,e,h,
    h,q,q,e,e,e,e,q,e,q,s,s,q,e,e,e,e,dqq,
    s,s,q,e,e,e,e,q,e,h,e,s,de,e,s,dee,w
  };

  // ---------- Bass ----------
  static const int bassNotes[] = {
    Ab3,Ab3,Eb3,Eb3,Ab3,Ab3,Ab3,Ab3,G3,Ab3,Ab3,Ab3,Db3,Db3,Ab3,Eb3,Ab3,Eb3,Eb3,
    G3,G3,Bb3,Ab3,Bb3,Ab3,Ab3,Ab3,
    Ab3,Ab3,Ab3,G3,F3,Eb3,F3,G3,Ab3,G3,Eb3,Eb3,Eb3,Eb3,Eb3,Eb3,Eb3,Bb3,
    G3,G3,G3,G3,G3,G3,G3,Ab3,Ab3,
    Ab3,Ab3,Ab3,G3,G3,C3,C3,C3,Bb3,Ab3,Ab3,Ab3,Ab3,Bb3,G3,Ab3
  };
  static const int bassDur[] = {
    e,e,e,e,e,e,e,dqe,e,e,q,e,e,e,e,dq,q,s,s,q,e,q,s,s,q,e,q,
    e,q,e,q,e,q,e,h,
    h,q,q,e,e,e,e,q,e,q,s,s,q,e,e,e,e,dqq,
    s,s,q,e,e,e,e,q,e,h,e,s,de,e,s,dee,w
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}


// =======================
// SONG 1: It Is Well With MySoul
// =======================
void playSong_ItIsWellWithMySoul() {
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
    Ab4,Ab4,Gb4,F4,F4,Eb4,F4,Gb4,Bb4,Ab4,Gb4,F4,Ab4,Db5,C5,Bb4,Bb4,Ab4,G4,Ab4,Ab4,Db5,Db5,C5,Bb4,Bb4,Bb4,Eb5,Eb5,Db5,C5,Bb4,Ab4,Db5,Db5,Db5,Db5,C5,Db5,Db5,
    Ab4,Ab4,Ab4,Ab4,Ab4,Ab4,F4,Ab4,Bb4,Bb4,Db5,Db5,C5,Db5,Db5
  };
  static const int sopDur[] = {
    q,h,q,q,h,q,q,q,q,q,q,dh,q,h,q,q,h,q,q,dh,q,h,q,q,h,q,q,h,q,q,h,q,q,h,q,q,h,dq,e,w,
    q,q,wh,q,q,wh,q,q,h,q,q,h,dq,e,w
  };

  // ---------- Alto ----------
  static const int altoNotes[] = {
    F4,F4,Eb4,Db4,Db4,C3,Db4,C4,C4,Eb4,Db4,F4,F4,Eb4,Db4,F4,Eb4,Eb4,Eb4,Gb4,F4,F4,Ab4,Gb4,Bb4,Ab4,Gb4,Gb4,G4,Ab4,Ab4,Ab4,Ab4,Db4,Eb4,F4,Eb4,F4,F4,
    Ab4,Ab4,Ab4,F4,F4,Eb4,Ab4,Ab4,Ab4,Eb4,Gb4,F4,Db4,F4,Gb4,Gb4,Gb4,F4,Eb4,F4,F4

  };
  static const int altoDur[] = {
    q,h,q,q,h,q,q,h,q,q,dh,q,h,q,q,h,q,q,dh,q,h,q,q,h,q,q,h,q,q,h,q,q,h,q,q,h,dq,e,w,
    q,q,h,q,q,h,q,q,h,q,q,h,q,q,h,q,q,h,dq,e,w
  };

  // ---------- Bass ----------
  static const int bassNotes[] = {
    Ab3,Ab3,Ab3,Ab3,Ab3,Ab3,Ab3,Ab3,Ab3,Ab3,Ab3,Ab3,Bb3,A3,Bb3,Db4,C3,Bb3,C3,C3,Db4,Db4,Db4,Db4,Db4,D4,Eb4,Eb4,Eb4,Eb4,Db4,C3,Db4,Ab3,Bb3,Ab3,Ab3,Ab3,Ab3,
    0,0,Ab3,Db4,C3,0,0,C3,Eb4,Db4,Ab4,Db4,Db4,Db4,Bb3,Ab3,Ab3,Ab3,Ab3
  };
  static const int bassDur[] = {
    q,h,q,q,h,q,q,h,q,q,dh,q,h,q,q,h,q,q,dh,q,h,q,q,h,q,q,h,q,q,h,q,q,h,q,q,h,dq,e,w,
    h,h,q,q,h,h,h,q,q,h,q,q,h,q,q,h,dq,e,w
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

// =======================
// SONG: SWEET HOUR OF PRAYER
// =======================
void playSong_SweetHourOfPrayer() {
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
  const int wh = w + h;  // ---------- Soprano (Top Staff, Up-stems) ----------
  static const int sopNotes[] = {
    D4, Fs4, G4, A4, A4, B4, Cs5, D5, B4, A4, Fs4, Fs4, E4, D4, E4, Fs4, E4,
    D4, Fs4, G4, A4, A4, B4, Cs5, D5, B4, A4, Fs4, Fs4, E4, D4, Fs4, E4, D4,
    A4, D5, Cs5, D5, B4, A4, Fs4, A4, A4, D5, Cs5, D5, B4, A4, Fs4, E4,
    D4, Fs4, G4, A4, A4, B4, Cs5, D5, B4, A4, Fs4, Fs4, E4, D4, Fs4, E4, D4
  };
  static const int sopDur[] = {
    e,q,e,q,e,q,e,q,e,q,e,
    e,e,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,e,e,e,q,e,q,
    e,q,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,e,e,e,q,e,q
  };

  // ---------- Alto (Top Staff, Down-stems) ----------
  static const int altoNotes[] = {
    D4, D4, E4, Fs4, Fs4, G4, A4, B4, G4, Fs4, D4, D4, Cs4, D4, Cs4, D4, Cs4,
    D4, D4, E4, Fs4, Fs4, G4, A4, B4, G4, Fs4, D4, D4, Cs4, D4, D4, Cs4, D4,
    Fs4, Fs4, G4, A4, G4, Fs4, D4, Fs4, Fs4, Fs4, G4, A4, G4, Fs4, D4, Cs4,
    D4, D4, E4, Fs4, Fs4, G4, A4, B4, G4, Fs4, D4, D4, Cs4, D4, D4, Cs4, D4
  };
  static const int altoDur[] = {
    e,q,e,q,e,q,e,q,e,q,e,
    e,e,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,e,e,e,q,e,q,
    e,q,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,e,e,e,q,e,q
  };

  // ---------- Tenor (Bottom Staff, Up-stems - Higher Bass) ----------
  static const int bassNotes[] = {
    Fs3, A3, A3, A3, D4, D4, D4, D4, D4, D4, A3, 
    A3, G3, Fs3, A3, A3, A3, Fs3, A3, A3, A3, D4, 
    D4, D4, D4, D4, D4, A3, A3, G3, Fs3, A3, G3, Fs3, 
    A3, A3, A3, A3, D4, D4, A3, A3, A3, A3, A3, A3, D4, D4, A3, A3,
    Fs3, A3, A3, A3, D4, D4, D4, D4, D4, D4, A3, A3, G3, Fs3, A3, G3, Fs3
  };
  static const int bassDur[] = {
    e,q,e,q,e,q,e,q,e,q,e,
    e,e,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,e,e,e,q,e,q,
    e,q,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,q,e,q,e,
    q,e,q,e,q,e,e,e,e,q,e,q
  };

  int sopLen  = sizeof(sopNotes)/sizeof(int);
  int altoLen = sizeof(altoNotes)/sizeof(int);
  int bassLen = sizeof(bassNotes)/sizeof(int);

  startSong(sopNotes, sopDur, sopLen,
            altoNotes, altoDur, altoLen,
            bassNotes, bassDur, bassLen);
}

#endif
