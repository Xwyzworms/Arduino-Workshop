
int LED = 11;
int bright = 0;
int increment = 5;
int times = 25;

void setup() {
  // put your setup code here, to run once:

  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(LED,bright);
  delay(times);
  bright = bright + increment;

  if(bright <= 0 || bright >= 255) {
    increment = -increment;
    }
  
}
