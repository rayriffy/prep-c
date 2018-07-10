#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  float x,y;
  scanf("%f %f",&x,&y);
  float bmi=y/pow(x,2);
  if(bmi<=18.5)
    printf("underweight");
  else if(bmi>18.5 && bmi<25)
    printf("normal weight");
  else if(bmi>=25 && bmi<30)
    printf("overweight");
  else
    printf("obesity");
  return 0;
}
