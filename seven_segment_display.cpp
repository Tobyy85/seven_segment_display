#include "seven_segment_display.h"
#include "digit_patterns.h"

SegmentDisplay::SegmentDisplay(int a_pin, int b_pin, int c_pin, int d_pin, int e_pin, int f_pin, int g_pin, int dp_pin)
  : pins{a_pin, b_pin, c_pin, d_pin, e_pin, f_pin, g_pin, dp_pin} {

}

void SegmentDisplay::begin(){
  for(int i = 0; i < 8; i++){
    pinMode(pins[i], OUTPUT);
  }
}

void SegmentDisplay::show_digit(int digit, bool show_dp){
  for(int i = 0; i < 7; i++){
    digitalWrite(pins[i], digit_patterns[digit][i]);
  }
  digitalWrite(pins[7], show_dp ? HIGH : LOW);
}
