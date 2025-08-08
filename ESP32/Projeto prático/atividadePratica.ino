#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqtt_server = "broker.hivemq.com";

WiFiClient Cadu_client;
PubSubClient client(Cadu_client);

void connect_wifi(){
  delay(10);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED){
    delay(50);
    Serial.print(".");
    Serial.println(" ");
    Serial.println("Wifi Connected.");
    Serial.println("IP Adress:");
    Serial.println(WiFi.localIP());
  }
}

void reconnect_MQTT(){
  while(!client.connected()){
    Serial.println("Trying to connect with broker...");
    if(client.connect("CaduBraga_Client")){
      Serial.println("Connected!");
    }else{
      Serial.println("Couldn't connect to the broker. Reason: ");
      Serial.println(client.state());
      Serial.println("Trying to reconnect in 5 seconds...");
      delay(5000);
    }
  }
}

void wifi_on(){
  if(WiFi.status()){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }
}

void broker_on(){
  if(client.connected()){
    digitalWrite(15, HIGH);
  }else{
    digitalWrite(15, LOW);
  }
}

void send_data(){
  int potValue = analogRead(34);
  Serial.print("Potentiometer value: ");
  Serial.println(potValue);
  
  client.publish("caduzinho123", String(potValue).c_str());
  delay(1000);
}

void setup(){
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(34, INPUT);
  Serial.begin(115200);
  connect_wifi();
  client.setServer(mqtt_server, 1883);
}

void loop(){
  client.loop();
  reconnect_MQTT();
  send_data();
  wifi_on();
  broker_on();
}