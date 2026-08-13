/////////////// Pico Robotics RC Car ///////////////

// Motor Driver Pins
int IN1 = 10;
int IN2 = 9;
int IN3 = 8;
int IN4 = 7;

// Motor Speed Control Pins
int ENA = 5;
int ENB = 6;

// Default Motor Speed
int speed = 200;

char t;

void setup()
{
  // Set motor pins as OUTPUT
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Set ENA and ENB as OUTPUT
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  // Start Serial Communication
  Serial.begin(9600);
}

void loop()
{
  // Read command from Bluetooth
  if(Serial.available())
  {
    t = Serial.read();
    Serial.println(t);
  }

  // ================= FORWARD =================
  if(t == 'F')
  {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ================= BACKWARD =================
  else if(t == 'B')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ================= LEFT =================
  else if(t == 'L')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ================= RIGHT =================
  else if(t == 'R')
  {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ============== FORWARD LEFT ===============
  else if(t == 'G')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ============== FORWARD RIGHT ==============
  else if(t == 'I')
  {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ============== BACKWARD LEFT ==============
  else if(t == 'H')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ============= BACKWARD RIGHT ==============
  else if(t == 'J')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);

    analogWrite(ENA, speed);
    analogWrite(ENB, speed);
  }

  // ================= STOP ====================
  else if(t == 'S')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);

    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
  }

  // ============== SPEED CONTROL ==============
  // App Slider: 0-9

  else if(t == '0') { speed = 100; }
  else if(t == '1') { speed = 120; }
  else if(t == '2') { speed = 140; }
  else if(t == '3') { speed = 160; }
  else if(t == '4') { speed = 180; }
  else if(t == '5') { speed = 200; }
  else if(t == '6') { speed = 220; }
  else if(t == '7') { speed = 230; }
  else if(t == '8') { speed = 240; }
  else if(t == '9') { speed = 245; }

  // Maximum Speed
  else if(t == 'q') { speed = 250; }
}
