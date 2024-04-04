#ifndef SEVEN_SEGMENT_DISPLAY_H
#define SEVEN_SEGMENT_DISPLAY_H

#include <Arduino.h>


class SegmentDisplay{
  public:
    SegmentDisplay(int a_pin, int b_pin, int c_pin, int d_pin, int e_pin, int f_pin, int g_pin, int dp_pin);
    void begin();
    void show_digit(int digit, bool show_dp = true);

  private:
    int pins[8];

};


#endif