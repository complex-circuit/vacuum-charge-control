const int q=175;//I was trying to find out how quickly I could activate the switch, and made it easier for you to set the speed for your project if you are ...
void on(){digitalWrite(8,HIGH);delay(q);digitalWrite(8,LOW);}//                  ... trying to do sonething wth a switch that has a different activation speed.
void off(){digitalWrite(7,HIGH);delay(q);digitalWrite(7,LOW);}
void setup(){pinMode(8,OUTPUT);pinMode(7,OUTPUT);off();delay(1000);off();on();off();on();off();delay(1000);}
void loop(){on();delay(15000);off();delay(45000);}
