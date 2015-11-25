
//States
  int state = 1;
  int turnState = 1;

//moteur 1
  int pin1 = 2;
  int pin2 = 3;
  int pin3 = 4;
  int pin4 = 5;

//moteur 2
  int pin5 = 8
  int pin6 = 9
  int pin7 = 10
  int pin8 = 11

//Turn modes
enum TurnStates{
  RIGHT,
  LEFT
};

void turn(TurnStates state, int turnDelay){
  
  if(state == RIGHT){
      if(turnState == 1){
    //Moteur 1
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);

    turnState = 2;
  } else if(turnState == 2) {
    //Moteur 1
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);

    turnState = 3;
  } else if(turnState == 3) {
    //Moteur 1
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
    
    turnState = 4;
  } else if(turnState == 4) {
    //Moteur 1
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);

    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
    
    turnState = 1;
  }
  delay(turnDelay);
    
  } else if(state == LEFT){
     //Moteur 1
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);

    turnState = 2;
  } else if(turnState == 2) {
    //Moteur 1
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);

    turnState = 3;
  } else if(turnState == 3) {
    //Moteur 1
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    
    digitalWrite(pin7, LOW);
    digitalWrite(pin8, HIGH);
    
    turnState = 4;
  } else if(turnState == 4) {
    //Moteur 1
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);

    digitalWrite(pin7, LOW);
    digitalWrite(pin8, HIGH);
    
    turnState = 1;
  }
  delay(turnDelay);  
  }
  
}
  
void forward(int turnDelay){
  if(state == 1){
    //Moteur 1
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);

    //Moteur 2
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);

    state = 2;
  } else if(state == 2) {
    //Moteur 1
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);

    //Moteur 2
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
    
    state = 3;
  } else if(state == 3) {
    //Moteur 1
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);

    //Moteur 2
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    
    digitalWrite(pin7, LOW);
    digitalWrite(pin8, HIGH);
    
    state = 4;
  } else if(state == 4) {
    //Moteur 1
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);

    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);

    //Moteur 2
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    
    digitalWrite(pin7, LOW);
    digitalWrite(pin8, HIGH);
    
    state = 1;
  }
  delay(turnDelay);
}

void setup() {
  Serial.begin(9600);

  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
}

void loop() {

forward(5);
 
}
