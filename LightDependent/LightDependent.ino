int A0Pin = A0;
int nLEDs = 5;
int LEDpin[] = {8,9,11,12,13};
int readVal;
int level;


void setup() {
  // put your setup code here, to run once:
  for (int i =0;i<5;i++){
      pinMode(LEDpin[i],OUTPUT);
    }
    pinMode(A0Pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  readVal = analogRead(A0Pin);
  Serial.println(readVal);
  level =0;
  level = map(readVal,1023,0,0,nLEDs+1);
  Serial.println(level);
  for (int i=0;i<nLEDs;i++){
    if(i < level){
      digitalWrite(LEDpin[i],HIGH);
      }
      else{
      digitalWrite(LEDpin[i],LOW);       
         }
    }
    delay(200);
}
