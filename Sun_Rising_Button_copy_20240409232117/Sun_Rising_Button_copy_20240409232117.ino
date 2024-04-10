const int buttonPin = 2; 
int buttonState = 0;
int previousButtonState = 0;

void setup() {
  pinMode(buttonPin, INPUT); 
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin); 

  if (buttonState != previousButtonState) {
    if (buttonState == HIGH){
      Serial.println("THE SUN RISES"); 
    } else { 
      Serial.println(" THE SUN FALLS");
    }
  }
  previousButtonState = buttonState; 
}
(looks good, might need to tweak the button code)
