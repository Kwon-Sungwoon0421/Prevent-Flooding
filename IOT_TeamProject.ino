#include <Servo.h>
#include <LiquidCrystal_I2C.h>

Servo myservo;                     
LiquidCrystal_I2C lcd(0x27, 16, 2); 

int buttonPin = 2;                  
int sensorPin = A0;                
int buzzerPin = 8;                  
int threshold = 600; // 수위 임계값

void setup() {
  myservo.attach(9);                
  pinMode(buttonPin, INPUT);        
  pinMode(buzzerPin, OUTPUT);       
  myservo.write(0);
  
  lcd.begin(16, 2);                 
  lcd.print("Water Level:");        
}

void loop() {
  int sensorValue = analogRead(sensorPin);  
  int buttonState = digitalRead(buttonPin); 
  
  if (buttonState == HIGH) { // 버튼을 이용하여 차수판 제거
    myservo.write(0);
    delay(1000); 
  }
  
  if (sensorValue > threshold) {
    myservo.write(180);
    
    tone(buzzerPin, 1000, 3000);
    
    lcd.setCursor(0, 1);  
    lcd.print("Motor is ON!");
    
    delay(3000); 
  } else {
    noTone(buzzerPin);      
    
    lcd.setCursor(13, 0);   
    lcd.print("     ");    
    lcd.setCursor(13, 0);  
    lcd.print(sensorValue); 
    
    lcd.setCursor(0, 1);    
    lcd.print("                ");  
  }
  
  delay(1000);  
}
