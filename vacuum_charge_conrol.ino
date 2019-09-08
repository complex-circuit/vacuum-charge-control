void on(){digitalWrite(8,HIGH);delay(500);digitalWrite(8,LOW);}
void off(){digitalWrite(7,HIGH);delay(500);digitalWrite(7,LOW);}
void setup(){pinMode(8,OUTPUT);pinMode(7,OUTPUT);on();off();on();off();delay(1000);}
void loop(){on();delay(15000);off();delay(45000);}
