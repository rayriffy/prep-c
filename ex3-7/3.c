#include <stdio.h>
#include <math.h>

float g=9.81;

float dis(float t) {
  return g*pow(t,2)/2;
}

float vel(float t) {
  return g*t;
}

int main(int argc, char const *argv[])
{
  float t;
  scanf("%f",&t);
  printf("%f %f",dis(t),vel(t));
  return 0;
}
