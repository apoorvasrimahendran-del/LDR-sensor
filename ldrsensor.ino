int ldrpin=A1;
void setup() {
 Serial.begin(9600);

}

void loop() {
  int lightvalue=analogRead(ldrpin);
  if(lightvalue<=200){
    Serial.println("Light Reading: Bright");
  }
  else{
    Serial.println("Light Reading: Dark");
  }
  delay(1000);
}
