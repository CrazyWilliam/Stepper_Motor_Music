// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4; 

// here comes a bunch of 'useful' vars; dont mind
int coun;
bool dir=0;
int del;
int c  = 1912;
int cf = 1805;
int d  = 1703;
int df = 1607;
int e  = 1517;
int f  = 1431;
int ff = 1351;
int g  = 1275;
int gf = 1203;
int a  = 1136;
int af = 1072;
int b  = 1012;
int c1 = floor(c/2);
int cf1= floor(cf/2);
int d1 = floor(d/2);
int df1= floor(df/2);
int e1 = floor(e/2);
int f1 = floor(1431/2);
int ff1= floor(1351/2);
int g1 = floor(1275/2);
int gf1= floor(1203/2);
int a1 = floor(1136/2);
int af1= floor(1072/2);
int b1 = floor(1012/2);
int e0 = e*2;
int g0 = g*2;
int b0 = b*2;
int af0= af*2;
int a0 = a*2;
int f0 = f*2;
int use= 180;
int tempo = 120;
int oct = 5;

void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  Serial.begin(115200);
}
void loop() {
  oct=5;
// Here you put your music code
  note(c, 1000);
  pa(100);
  note(d, 1000);
  pa(100);
  note(e, 1000);
  pa(100);
  note(f, 1000);
  pa(100);
  note(a, 1000);
  pa(100);
  note(b, 1000);
  pa(100);
  pa(1000); Serial.println("TEST1");
  note(c1, 1000);
  pa(100);
  note(d1, 1000);
  pa(100);
  note(e1, 1000);
  pa(100);
  pa(1000); Serial.println("TEST2");
  note(e0, 1000);
  pa(100);
  note(b0, 1000);
  pa(100);
  note(g0, 1000);
  pa(100);
  pa(2000); Serial.println("TEST3");

}

void note(int num,long dur) {
  del=(num*oct)/10;
//  dir = !dir;
  digitalWrite(dirPin, dir);
  coun=floor((dur*5*tempo)/del);
  for(int x = 0; x < coun; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(del);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(del);
  }

}

void pa(int durp){
  int ker=floor(durp/100)*tempo;
    delay(ker);
  }
  
