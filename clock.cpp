// add some for rtestb
#include <stdio.h>
#include <math.h>

#define ANGLE_PER_HOUR  360 / 12
#define ANGLE_PER_MIN   360 / 60

float degree(int hour, int min)
{
    // add some for rtestb.
  float angle_hour = hour * ANGLE_PER_HOUR;
  angle_hour += min * 0.5;
  printf("angle_hour: %f\n", angle_hour);
  float angle_min = min * ANGLE_PER_MIN;
  float res = fabs(angle_hour - angle_min);
  if (res > 180) {
    res = 360 - res;
  }
  return res;
  // add some for rtestb.
}

int main(int argc, char *argv[])
{
    printf("%f\n", degree(11, 15));
    printf("new line and new letter");
    printf("after all clean.");
    return 0;
}
