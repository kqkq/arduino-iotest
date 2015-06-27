#define START_PIN  2
#define PIN_NUM    20
unsigned long lastToggle[PIN_NUM];
unsigned long halfPeriod[PIN_NUM] = {0, 0, 24890, 16568, 12422, 
                                    9938, 8275, 7095, 6191, 5500,
                                    4946, 4502, 4120, 3800, 3520,
                                    3283, 3080, 2901, 2728, 2591};
                                    // In microseconds
int pinLevel[20];

void setup() {
  Serial.begin(115200);
  for(int i = START_PIN; i < PIN_NUM; i++) {
    pinMode(i, OUTPUT);
    pinLevel[i] = LOW;
    digitalWrite(i, pinLevel[i]);
    //halfPeriod[i] = ((int)(1000000.0 / i / 2.0 / 10.0)) - 48;
  }
}

void loop() {
  unsigned long us = micros();
  for(int i = START_PIN; i < PIN_NUM; i++) {
    if(us - lastToggle[i] > halfPeriod[i]) {
      pinLevel[i] = !pinLevel[i];
      digitalWrite(i, pinLevel[i]);
      lastToggle[i] = us;
    }
  }
  if(Serial.available()) {
    Serial.print('[');
    Serial.print((char)Serial.read());
    Serial.print(']');
  }
}
