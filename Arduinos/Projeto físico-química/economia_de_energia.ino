#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.noBacklight(); // Desliga o backlight
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Prof. Clodoaldo");
  lcd.setCursor(0, 1);
  lcd.print("Fisico quimica");
}

void loop() {
}

/* Código desenvolvido para economizar energia, 
pois a versão anterior consumia muita bateria de limão
e não conseguia manter a mensagem por muito tempo. */