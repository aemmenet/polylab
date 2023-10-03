/*
  mikroBUS Blink

  Turns an LED on for one second, then off for one second, repeatedly.
*/

/* define mikroBUS pins ---------- ---------- ---------- ---------- ---------- ----------*/

#define mikroBUS_TX PIN_PA0  // Arduino Pin 0, Chip Pin 30
#define mikroBUS_RX PIN_PA1  // Arduino Pin 1, Chip Pin 31

#define mikroBUS_SDA PIN_PA2  // Arduino Pin 2, Chip Pin 32
#define mikroBUS_SCL PIN_PA3  // Arduino Pin 3, Chip Pin 1

#define mikroBUS_MOSI PIN_PA4  // Arduino Pin 4, Chip Pin 2
#define mikroBUS_MISO PIN_PA5  // Arduino Pin 5, Chip Pin 3
#define mikroBUS_SCK PIN_PA6   // Arduino Pin 6, Chip Pin 4
#define mikroBUS_CS PIN_PA7    // Arduino Pin 7, Chip Pin 5

#define mikroBUS_AN PIN_PD1   // Arduino Pin 13, Chip Pin 11
#define mikroBUS_RST PIN_PD2  // Arduino Pin 14, Chip Pin 12
#define mikroBUS_PWM PIN_PD3  // Arduino Pin 15, Chip Pin 13
#define mikroBUS_INT PIN_PD4  // Arduino Pin 16, Chip Pin 14

void setup() {

  /* initialize digital pins as an output ---------- ---------- ---------- ----------*/

  pinMode(mikroBUS_TX, OUTPUT);
  pinMode(mikroBUS_RX, OUTPUT);
  pinMode(mikroBUS_SDA, OUTPUT);
  pinMode(mikroBUS_SCL, OUTPUT);
  pinMode(mikroBUS_MOSI, OUTPUT);
  pinMode(mikroBUS_MISO, OUTPUT);
  pinMode(mikroBUS_SCK, OUTPUT);
  pinMode(mikroBUS_CS, OUTPUT);
  pinMode(mikroBUS_AN, OUTPUT);
  pinMode(mikroBUS_RST, OUTPUT);
  pinMode(mikroBUS_PWM, OUTPUT);
  pinMode(mikroBUS_INT, OUTPUT);
}

/* the loop function runs over and over again forever ---------- ---------- ----------*/

void loop() {
  digitalWrite(mikroBUS_TX, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(mikroBUS_TX, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  digitalWrite(mikroBUS_RX, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(mikroBUS_RX, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  digitalWrite(mikroBUS_SDA, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(mikroBUS_SDA, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(mikroBUS_SCL, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(mikroBUS_SCL, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(mikroBUS_MOSI, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                        // wait for a second
  digitalWrite(mikroBUS_MOSI, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                        // wait for a second

  digitalWrite(mikroBUS_MISO, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                        // wait for a second
  digitalWrite(mikroBUS_MISO, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                        // wait for a second

  digitalWrite(mikroBUS_SCK, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(mikroBUS_SCK, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(mikroBUS_CS, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(mikroBUS_CS, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  digitalWrite(mikroBUS_AN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(mikroBUS_AN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second

  digitalWrite(mikroBUS_RST, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(mikroBUS_RST, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(mikroBUS_PWM, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(mikroBUS_PWM, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(mikroBUS_INT, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(mikroBUS_INT, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
