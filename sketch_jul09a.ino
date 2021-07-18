#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,INPUT);
  
  Serial.begin(9600);
  

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Good FruitFinder");
  lcd.setCursor(0, 1);
  lcd.print("Select Fruit    ");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  float val=analogRead(A0);
  
  delay(100);
  
  
  int a = digitalRead(6);
  int b = digitalRead(7);
  int c = digitalRead(13);

  //for mango
  if(a==1){
    Serial.println(val);
    lcd.setCursor(7, 1);
    lcd.print("  ");
    lcd.setCursor(9, 1);
    lcd.print("Tomato");
    
    if(val>=900){
      lcd.setCursor(0, 1);
      lcd.print(val);
      digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
      
    }
    else if(val>=400){
      lcd.setCursor(0, 1);
      lcd.print(val);
      digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
     
    }
    else{
      lcd.setCursor(0, 1);
      lcd.print(val);
      digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
     
    }

  }
  
  
  //For Banana
  if(b==1){
    Serial.println(val);
    lcd.setCursor(0, 1);
    lcd.print(val);
    lcd.setCursor(7, 1);
    lcd.print("  ");
    lcd.setCursor(9, 1);
    lcd.print("Guava ");
    
    if(val>=900){
    lcd.setCursor(0, 1);
    lcd.print(val);
    digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    
    }
    else if(val>=400){
      lcd.setCursor(0, 1);
      lcd.print(val);
      digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
     
    }
    else{
      lcd.setCursor(0, 1);
      lcd.print(val);
      digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
     
    }
    
  }

  if(c==1){
    Serial.println(val);
    lcd.setCursor(0, 1);
    lcd.print(val);
    lcd.setCursor(7, 1);
    lcd.print("  ");
    lcd.setCursor(9, 1);
    lcd.print("Mango ");
    
    if(val>=900){
    lcd.setCursor(0, 1);
    lcd.print(val);
    digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    
    }
    else if(val>=400){
      lcd.setCursor(0, 1);
      lcd.print(val);
      digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
     
    }
    else{
      lcd.setCursor(0, 1);
      lcd.print(val);
      digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
     
    }
    
  }


}
