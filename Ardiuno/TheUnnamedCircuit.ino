//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by yususemize yususemize
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4791341-the-unnamed-circuit

int push = 4;int w = 12;// the setup rutine runs once when you press reset:void setup() {;  Serial.begin(9600);  pinMode(push, INPUT);  pinMode(w,OUTPUT);}// the loop routine runs over and over again forever:void loop() {  int sense = digitalRead(push);  Serial.println(sense);  if (sense == 1)  {    digitalWrite(w,HIGH);    delay(200);    digitalWrite(w,LOW);  }   delay(1);}
