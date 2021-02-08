#include <stdio.h>
#include <math.h>

float degree(int hour, int min)
{
  //angle_hour - angle_min
  float angle_hour = hour * 30;
  angle_hour += min * 0.5;
  printf("angle_hour: %f\n", angle_hour);
  float angle_min = min * 6;
  float res = fabs(angle_hour - angle_min);
  if (res > 180) {
    res = 360 - res;
  }
  return res;
}

int main(int argc, char *argv[])
{
  printf("%f\n", degree(1, 5));
  //local update cover
  //server update3
  //lala
  //local update 2
  //together with readme
  return 0;
}
