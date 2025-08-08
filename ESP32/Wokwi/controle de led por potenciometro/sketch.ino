const int ledPin = 2;
const int potPin = 34;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(115200);
}

void loop() {
  int potValue = analogRead(potPin);
  int brightness = map(potValue, 0, 4095, 0, 255); // ESP32 ADC é 12 bits (0-4095)
  analogWrite(ledPin, brightness);
  Serial.print("Potentiometer: ");
  Serial.print(potValue);
  Serial.print(" -> LED brightness: ");
  Serial.println(brightness);
  delay(100);
}
