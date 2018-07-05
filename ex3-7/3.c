#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  float a,t;
  scanf("%f %f",&a,&t);
  printf("%f %f",a*pow(t,2)/2,a*t);
  return 0;
}
