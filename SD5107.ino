const int clkPin = 2;  //clk+
const int uclkPin = 3; //uclk+
//...................................
void setup() {
  pinMode(uclkPin, OUTPUT);    //cấu hình các chân clk và uclk dạng ngõ ra
  pinMode(clkPin, OUTPUT);
}
//...................................
void loop() {
  for (int x = 0; x < 500; x++) { //quay thuận 1 vòng
    digitalWrite(clkPin, HIGH);
    delayMicroseconds(1000);      //thời gian phát xung => động cơ quay nhanh hoặc chậm
    digitalWrite(clkPin, LOW);
    delayMicroseconds(1000);
  }
  delay(1000);                    //dừng 1s trước khi đảo chiều
  for (int x = 0; x < 500; x++) { //quay nghịch 1 vòng
    digitalWrite(uclkPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(uclkPin, LOW);
    delayMicroseconds(1000);
  }
  delay(1000);                    //dừng 1 giây
}
