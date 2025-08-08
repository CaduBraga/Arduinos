#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Prof. Clodoaldo");
  lcd.setCursor(0, 1);
  lcd.print("Fisico quimica");
  delay(3000);
  lcd.clear();
  delay(1000);
}

/*
  Atividade desenvolvida na disciplina de Físico-Química do Técnico em Química
  do IFSC Jaraguá do Sul, com o objetivo de criar uma célula galvânica caseira
  para ligar um dispositivo diferente de um LED.

  Para isso, foi feita uma bateria com 10 limões em série e depois 3 dessas em paralelo
  (para aumentar respectivamente, a tensão e a corrente) para poder energizar e acender um LCD 16x2 I2C.
*/