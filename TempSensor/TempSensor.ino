int A0Pin = A0;
int minVal = 20;
int maxVal = 30;
int readVal ;
float temp;


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    analogReference(INTERNAL);
}

void loop() {
  // put your main code here, to run repeatedly:

  readVal = analogRead(A0Pin);
  temp = (readVal * 110)/1023;
  String ans = String(minVal) + " " + String(temp) + " " + String(maxVal);
  Serial.println(ans);
  delay(1000);

}s
