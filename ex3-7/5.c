#include <stdio.h>
#include <math.h>

float findthatshit(float a, float b, float c, float d) {
  return sqrt(pow(c-a,2)-pow(d-b,2));
}

int main(int argc, char const *argv[])
{
  float x1,x2,y1,y2;
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
  printf("%f",findthatshit(x1,y1,x2,y2));
  return 0;
}
