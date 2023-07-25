const int buzzer = 6;

void setup() {
  pinMode(buzzer, OUTPUT); 
} 

void loop() {  
  tone(buzzer, 500); // 500Hz
  delay(1000);
  noTone(buzzer); // Buzzer OFF
  delay(1000);
  
  tone(buzzer, 1000); // 1000Hz
  delay(1000);
  noTone(buzzer); // Buzzer OFF
  delay(1000);
}
