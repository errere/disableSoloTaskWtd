
#include "disableSoloTaskWtd.h"
void setup() {
  // put your setup code here, to run once:
  disableTaskWtd();
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(millis());
}