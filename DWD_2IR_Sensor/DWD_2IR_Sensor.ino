
#define PIN_IR 0
#define PIN_IR2 1
int val1 = 0;                 // value of IR sensor
int val2 = 0;                 // value of IR sensor


void setup() {
  Serial.begin(9600);               // starts the serial monitor
  delay(500);
}
 
void loop() {
  val1 = map(analogRead(PIN_IR), 0, 700, 0, 255);
  val2 = map(analogRead(PIN_IR2), 0, 700, 0, 255);
  delay(500);
    Serial.print(val1);
    Serial.print(" ");
    Serial.println(val2);
  
}
