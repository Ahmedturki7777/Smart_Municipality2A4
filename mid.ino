#include <SPI.h>

#include <MFRC522.h>

#include <Wire.h>

#include <LiquidCrystal_I2C.h>



#define SS_PIN 10

#define RST_PIN 9

#define LED_DENIED_PIN 7

#define LED_ACCESS_PIN 6

#define LED_CHECK_PIN 8






LiquidCrystal_I2C lcd(0x27, 16, 2);

MFRC522 mfrc522(SS_PIN, RST_PIN); // Instance of the class




//int codeRead = 0;

//String uidString;


void setup() {

  Serial.begin(9600);

  SPI.begin();       // Init SPI bus

  mfrc522.PCD_Init(); // Init MFRC522






  lcd.init();



  lcd.backlight();

  lcd.setCursor(0, 0);

  lcd.print("Show your card:)");

  pinMode( LED_DENIED_PIN , OUTPUT);

  pinMode( LED_ACCESS_PIN , OUTPUT);

  pinMode( LED_CHECK_PIN , OUTPUT);

}

void loop() {



  if ( mfrc522.PICC_IsNewCardPresent())

  {

    if ( mfrc522.PICC_ReadCardSerial())

    {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Checking ...");
      digitalWrite( LED_CHECK_PIN , HIGH);



      for (byte i = 0; i < mfrc522.uid.size; i++) {

        // Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");

        Serial.print(mfrc522.uid.uidByte[i], DEC);
        Serial.print(",") ;


        //lcd.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");

        //  lcd.print(mfrc522.uid.uidByte[i], HEX);

        //  lcd.print(" ");

      }


      String ii = Serial.readString();
      delay(1000);
      digitalWrite( LED_CHECK_PIN , LOW);
      lcd.clear();
      if (ii.length() > 1 )
      {
        lcd.setCursor(4 , 0);
        lcd.print("Welcome");
        lcd.setCursor(0, 1);
        lcd.print(ii);

      }
      else
      {
        lcd.clear();
        lcd.setCursor(5, 0);
        lcd.print("Client");
        lcd.setCursor(1, 1);
        lcd.print("not registered");
      }



      int i = 0;




      delay(1000);

      lcd.clear();

      lcd.setCursor(0, 0);





      if (ii.length() > 1 )
      {
        digitalWrite( LED_ACCESS_PIN , HIGH);




        lcd.print("Authorized access");







      } else {
        digitalWrite( LED_DENIED_PIN , HIGH);

        lcd.print(" Access denied  ");

        Serial.println("\nUnknown Card");

      }



      //  Serial.println("============================");



      mfrc522.PICC_HaltA();



      delay(3000);

      reset_state();

    }

  }

}



void reset_state()

{

  lcd.clear();

  lcd.setCursor(0, 0);

  lcd.print("Show your card:)");

  digitalWrite( LED_ACCESS_PIN , LOW);

  digitalWrite( LED_DENIED_PIN , LOW);



}
