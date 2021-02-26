int LED = 8;
int Switch = 4;
int isOn = 0;
void setup() {
  // put your setup code here, to run once:

  pinMode(LED,OUTPUT);
  pinMode(Switch,INPUT);
  digitalWrite(LED,LOW);
  digitalWrite(Switch,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

   if(digitalRead(Switch) == 0 && isOn == 1){
      Serial.println("asw On");
      digitalWrite(LED,HIGH);
      isOn = 0;
    }
   else if(digitalRead(Switch) == 0 && isOn == 0){
      digitalWrite(LED,LOW);
      Serial.println("asw");
      isOn = 1;
    }

    delay(300);
}
