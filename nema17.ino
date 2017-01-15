//with A4988 to run Nema 17 at high rpm. 
//in order to run at high rpm, a simple acceleration is used. 

//only two digital pins on Arduino are used
const int STEP = 5;//for step signal
const int DIR = 4;//for direction

void setup() {
  // put your setup code here, to run once:
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
}

int x = 5000;
void loop() {
  digitalWrite(DIR, HIGH);
  
  for(int index = 0; index < 3000; index++){
    for(int i =0; i<5; i++){
      digitalWrite(STEP, HIGH);
      delayMicroseconds(x);
      digitalWrite(STEP, LOW);
      if(x>150) x--;  
    }
  }
}
