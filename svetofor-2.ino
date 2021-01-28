int r = 2;
int y = 3;
int g = 4;
int r2 = 5;
int y2 = 6;
int g2 = 7; 
void setup() { 
     pinMode(r, OUTPUT);
     pinMode(y, OUTPUT);
     pinMode(g, OUTPUT);
     pinMode(r2, OUTPUT);
     pinMode(y2, OUTPUT);
     pinMode(g2, OUTPUT);}
void loop() { 
    digitalWrite(r, HIGH);
    digitalWrite(g2, HIGH);//красный сигнал
    delay(7000);
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    delay(500);
    digitalWrite(r, HIGH);  //красный сигнал 1
    delay(1000);
    digitalWrite(r, LOW);
    delay(500);
    digitalWrite(r, HIGH);  //красный сигнал 2
    delay(1000);
    digitalWrite(r, LOW);
    delay(500);
    digitalWrite(r, HIGH);  //красный сигнал 3
    delay(1000);
    digitalWrite(r, LOW);
    
}
    

