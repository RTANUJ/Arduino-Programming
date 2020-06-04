/**********************************************************
File name: 32  ESP8266 and Temperature Sensor LM35 with Arduino.ino Description:  
Let, LM35 temperature sensor values on thingspeak.**************/

int value=0;
float temp=0;
#define SSID "BSNL_bb" // type in your SSID
#define PASS "bsnl4924" // type in your password
#define IP "184.106.153.149"//Thingspeak IP Address,need not be changed
String GET = "GET /update?key=F51VSF3MUOE6UYHM&field1="; // instead of F51VSF3MUOE6UYHM, add the write API key of your channel.
int wifir=0;
void setup()  {
  Serial.begin(115200); //baud rate for ESP8266 and Serial Monitor
  Serial.println("AT");
  delay(5000);
  if(Serial.find("OK")){
    Serial.println("OK");
    // connectWiFi();
    delay(1000);
  }
}
void loop()  {
  //Get Temperature value and convert it to String
  value=analogRead(A0);
  temp=value*.48828125; // value*(5*100/1024) 
  String tempC=String(temp);// converting float value to String

  //Upload temperature value to thingspeak.com api

  String cmd = "AT+CIPSTART=\"TCP\",\"";//set up TCP connection
  cmd += IP;
  cmd += "\",80";
  Serial.println(cmd);
  delay(1000);
    if(Serial.find("Error")){
      Serial.println("AT+CIPSTART Error");
      return;
    }
  cmd = GET;
  cmd += tempC;
  cmd += "\r\n\r\n";
  Serial.print("AT+CIPSEND=");//send TCP/IP data
  Serial.println(cmd.length());
  delay(1000);
    if(Serial.find(">")){ 
      Serial.print(cmd); 
    }
    else
      Serial.println("AT+CIPSEND error");
  delay(16000); // Thingspeak can update the value only at an interval of 15 secs.
}
