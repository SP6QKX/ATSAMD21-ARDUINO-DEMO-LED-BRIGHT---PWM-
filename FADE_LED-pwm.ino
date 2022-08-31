// DEMO LED PWN ARDUINO ATSAMD21 
int bright = 0;
int fade = 1;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}
void loop() {
  analogWrite(led1, bright);
  analogWrite(led2, 255 - bright);
  analogWrite(led3, 255 - bright);
  analogWrite(led4, bright);

  bright = bright + fade;
//  if (bright = 0)+ led3 HIGH;
  delay (3);
  if (bright <= 0 || bright >= 255){
    fade = - fade;
  } ;
  delay(3);
}
// That's all folks :) 
