#include <stdio.h>
#include <math.h>

float findthatshit(float a, float b) {
  return sqrt(pow(a,2)+pow(b,2));
}

int main(int argc, char const *argv[])
{
  float x,y;
  scanf("%f %f",&x,&y);
  printf("%f",findthatshit(x,y));
  return 0;
}
