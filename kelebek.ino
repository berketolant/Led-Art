int led = 1;          
int brightness = 255;    
int fadeAmount = 5;   
void setup() {
  pinMode(led, OUTPUT);
  }
void loop() {
// analogWrite(led, 255);
// delay(5000);
 for(int x=0; x<500; x++) {
     firstSection();
    }
     // delay(250);                       

 for(int y=0; y<5; y++) {
     secondSection();
    }
   }
void firstSection() {
  for(int a=0; a<49; a++) {
    analogWrite(led, brightness);
    brightness = brightness - fadeAmount;
  if (brightness <= 20 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    }
    delay(30);
    }
   }
void secondSection() {
  analogWrite(led, 255);  
  delay(150);                       
  analogWrite(led, 50);    
  delay(150);
  digitalWrite(led, HIGH);   
  delay(200);                       
   
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5){   
  analogWrite(led, fadeValue);
  delay(9);
  }
}
