#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;
  float max,min,a[20],sum=0;
  for(i=0;i<20;i++) {
    scanf("%f",&a[i]);
  }
  max=a[0];
  min=a[0];
  for (i=0;i<20;i++)
  {
    sum+=a[i];
    if (a[i]>max)
      max=a[i];
    else if (a[i]<min)
      min=a[i];
  }
  printf("%f %f %f",max,min,sum/20);

  //NORMALIZE
  float b[20];
  for(i=0;i<20;i++)
    b[i]=(a[i]-min)/(max-min);
  return 0;
}