#include <seven_segment_display.h>

SegmentDisplay display(2, 3, 6, 5, 4, 1, 0, 7);

int number = 0;
long current_millis = 0;
long last_millis = 0;

void setup() {
  display.begin();

}

void loop() {
  
  display.show_digit(number, false);

  current_millis = millis();
  if (current_millis - last_millis >= 1000){
    number++;
    last_millis = current_millis;
  }

  if (number > 15){
    number = 0;
  }

}
