// C++ code
//
#define BUZZ 8

void setup() { }

void loop() {
  //Beep at 1000 Hz for 500ms
 // tone(BUZZ, 100, 2000);
  //delay(1000);

  // Two short beeps
  tone(BUZZ, 2000, 100);
  delay(200);
  tone(BUZZ, 2000, 100);
  delay(1000);
}