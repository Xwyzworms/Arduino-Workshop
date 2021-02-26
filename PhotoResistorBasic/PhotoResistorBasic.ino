int volDivider = A0;
int LED = 11;
int lightIntensityThres =30;
int reading , bright ;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(volDivider,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  reading=analogRead(volDivider);
  bright= 0;
  Serial.println(reading);
  if(reading > lightIntensityThres) {
      bright = map(reading,0,lightIntensityThres,0,255);
      analogWrite(LED,bright);

      }
   else{
      analogWrite(LED,0);
    }
}
