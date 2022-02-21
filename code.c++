int Monitor1 = 0;


void setup()
{
  Serial.begin(9600);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void a1(){
// 1A
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
 
}

void a2(){
// 2A
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  
}

void a3() {
  
// 3A
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  
}

void a4(){
 // 4A
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  
}

void a5(){
// 5A
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
   
}

void a6(){
// 6A
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
    
}

void a0(){
//A0
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  
}

void b1(){
// 1B
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);  
}

void b2(){
// 2B
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);  
}

void b3(){
// 3B
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);  
}

void b4(){
// 4B
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);  
}

void b5(){
// 5B
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);  
}

void b6(){
// 6B
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);  
}

void b7(){
// 7B
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);  
}

void b8(){
// 8B
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);  
}

void b9(){
// 9B
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);  
}

void b0(){
// 0B
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);  
}


void c1(){
// 1C
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void c2(){
// 2C
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void c3(){
 // 3C
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void c4(){
// 4C
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}

void c5(){
// 5B
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}

void c6(){
// 6C
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}

void c7(){
// 7C
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}

void c8(){
// 8C
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}

void c9(){
// 9C
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}

void c0(){
 // 0C
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void milCont(){ 
  
  delay(100);
  c9();
  delay(100);
  c8();
  delay(100);
  c7();
  delay(100);
  c6();
  delay(100);
  c5();
  delay(100);
  c4();
  delay(100);
  c3();
  delay(100);
  c2();
  delay(100);
  c1();
  delay(100);
  c0();
}



void segCont (){
 
 
 b9();
 milCont();
 b8();
 milCont();
 b7();
 milCont();
 b6();
 milCont();
 b5();
 milCont();
 b4();
 milCont();
 b3();
 milCont();
 b2();
 milCont();
 b1();
 milCont();
 b0();
 milCont();
 
 
 
}

bool signal = false;
bool mainCont(){
  a6();
  a5();
  segCont();
  a4();
  segCont();
  a3();
  segCont();
  a2();
  segCont();
  a1();
  segCont();
  a0();
  segCont();
  
  return signal = true;
}

void ledsOn(){
  digitalWrite(13, HIGH);
}

void ledsOff(){
  digitalWrite(13, LOW);
}


void loop()
{
  Serial.println("GabrielBarbosa");
  signal = false;
  ledsOff();
  
 mainCont();
  if(signal = true){
    ledsOn();
    delay(5000); // Wait for 1000 millisecond(s)
  } 
  
}
  