#include <WiFi.h>

const char* ssid = "iPhone de Caduzeira";
const char* password = "991752024";

const int led_esp = 2;
const int led_wifi = 15;

void connect_wifi(){
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void setup() {
  pinMode(led_esp, OUTPUT);
  pinMode(led_wifi, OUTPUT);

  Serial.begin(115200);

  digitalWrite(led_esp, HIGH);

  connect_wifi();

  digitalWrite(led_wifi, HIGH);
}

void loop() {
}
