#include <stdio.h>
#include <math.h>

float findr(float x) {
  return sqrt(x/3.14);
}
float findtwopir(float x) {
  return findr(x)*6.28;
}

int main(int argc, char const *argv[])
{
  float x;
  scanf("%f", &x);
  printf("%f", findtwopir(x));
  return 0;
}
