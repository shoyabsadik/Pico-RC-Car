///////////////  Pico Robotics RC Car  ///////////////

int IN1 = 10;
int IN2 = 9;
int IN3 = 8;
int IN4 = 7;

int ENA = 5;
int ENB = 6;


int speed= 200;

int car[7] = {5,6,7,8,9,10,11};

int x;

char t;

void setup()
{
    for(x = 0; x<7; x=x+1)
    {
        pinMode(car[x], OUTPUT);
    }
    
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available())
    {
        t = Serial.read();
        Serial.print(t);
    }
    
if(t == 'F') //Forward
    {
        analogWrite(IN1, speed);
        analogWrite(IN2, 0);
        analogWrite(IN3, 0);
        analogWrite(IN4, speed);
    }
   
    else if(t == 'B') //Backward
    {
        analogWrite(IN1, 0);
        analogWrite(IN2, speed);
        analogWrite(IN3, speed);
        analogWrite(IN4, 0);
    }
   
    else if(t == 'L') //Left
    {
        analogWrite(IN1, 0);
        analogWrite(IN2, speed);
        analogWrite(IN3, 0);
        analogWrite(IN4, speed);
    }
   
    else if(t == 'R') //Right
    {
        analogWrite(IN1, speed);
        analogWrite(IN2, 0);
        analogWrite(IN3, speed);
        analogWrite(IN4, 0);
    }
   
    else if(t == 'G') //FowardLeft
    {
        analogWrite(IN1, 0);
        analogWrite(IN2, 0);
        analogWrite(IN3, 0);
        analogWrite(IN4, speed);
    }
   
    else if(t == 'I') //ForwardRight
    {
        analogWrite(IN1, speed);
        analogWrite(IN2, 0);
        analogWrite(IN3, 0);
        analogWrite(IN4, 0);
    }
   
    else if(t == 'H') //BackwardLeft
    {
        analogWrite(IN1, 0);
        analogWrite(IN2, 0);
        analogWrite(IN3, speed);
        analogWrite(IN4, 0);
    }
   
    else if(t == 'J') //BackwardRight
    {
        analogWrite(IN1, 0);
        analogWrite(IN2, speed);
        analogWrite(IN3, 0);
        analogWrite(IN4, 0);
    }


    
    else if(t == 'W') //FrontLightON
    {
        digitalWrite(F_led, HIGH);
    }
    
    else if(t == 'w') //FrontLightOFF
    {
        digitalWrite(F_led, LOW);
    }
    
    else if(t == 'U') //BackLightON
    {
        digitalWrite(B_led, HIGH);
    }
    
    else if(t == 'u') //BackLightOFF
    {
        digitalWrite(B_led, LOW);
    }
    
    else if(t == 'V') //Horn-ON
    {
        digitalWrite(Horn, HIGH);
    }
    
    else if(t == 'v') //Horn-OFF
    {
        digitalWrite(Horn, LOW);
    }
    
    else if(t == 'S') //Stop-Motion
    {
        analogWrite(IN1, 0);
        analogWrite(IN2, 0);
        analogWrite(IN3, 0);
        analogWrite(IN4, 0);
    }

/////Speed-Control/////

    else if(t == '0') {speed = 100;}
    else if(t == '1') {speed = 120;}
    else if(t == '2') {speed = 140;}
    else if(t == '3') {speed = 160;}
    else if(t == '4') {speed = 180;}
    else if(t == '5') {speed = 200;}
    else if(t == '6') {speed = 220;}
    else if(t == '7') {speed = 230;}
    else if(t == '8') {speed = 240;}
    else if(t == '9') {speed = 245;}
    else if(t == 'q') {speed = 250;}
    
    delay(10); 
}


///// Programmed by -
/////'M. Shoyab Sadik' /////

