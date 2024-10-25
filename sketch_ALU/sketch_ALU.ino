int EstadoA = 0;
  int EstadoB = 0;

  int w = 0;
  int x = 0;
  int y = 0;
  int z = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  EstadoA = digitalRead(2); 
  EstadoB = digitalRead(3); 
  w = digitalRead(4);
  x = digitalRead(5);
  y = digitalRead(6);
  z = digitalRead(7);

  
  if ((EstadoA ^ EstadoB)&&(!z && !y && !x && w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }
  
  if ((EstadoA && EstadoB)&&(!z && !y && !x && w)) {
    digitalWrite(12, HIGH);
    digitalWrite(12, LOW);
  }

  if ((EstadoA ^ EstadoB)&&(!z && !y && x && !w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }

  if ((!EstadoA && EstadoB)&&(!z && !y && x && !w)) {
    digitalWrite(11, HIGH);
    digitalWrite(11, LOW);
  }

  if ((EstadoA && EstadoB)&&(!z && !y && x && w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }
  if ((EstadoA && EstadoB)&&(!z && y && !x && !w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }
  if ((!EstadoA && !EstadoB)&&(!z && y && !x && !w)) {
    digitalWrite(10, HIGH);
    digitalWrite(10, LOW);
  }
  if ((EstadoA && !EstadoB)&&(!z && y && !x && !w)) {
    digitalWrite(9, HIGH);
    digitalWrite(9, LOW);
  }

  if ((EstadoA && EstadoB) && (!z && y && !x && w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }

  if ((EstadoA || EstadoB) && (!z && y && x && !w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }

  if ((!z && y && x && w)) {
    if (!EstadoA) {
      digitalWrite(13, HIGH);
      digitalWrite(13, LOW);
    } else {
      digitalWrite(13, LOW);
    }
  }

  if ((EstadoA ^ EstadoB) && (z && !y && !x && !w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }

  if (!(EstadoA ^ EstadoB) && (z && !y && !x && w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }

  if (!(EstadoA && EstadoB) && (z && !y && x && !w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }

  if (!(EstadoA || EstadoB) && (z && !y && x && w)) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
}
}
