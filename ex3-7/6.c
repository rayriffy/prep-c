#include <stdio.h>
#include <math.h>

float findthatshit(float a, float b, float c, float d) {
  return sqrt(pow(c-a,2)-pow(d-b,2));
}

int main(int argc, char const *argv[])
{
  float x1,x2,x3,y1,y2,y3,tmp[3],max;
  scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
  tmp[0]=findthatshit(x1,y1,x2,y2);
  tmp[1]=findthatshit(x1,y1,x3,y3);
  tmp[2]=findthatshit(x3,y3,x2,y2);
  max=tmp[0];
  for (int i=0;i<3;i++)
  {
    if (tmp[i]>max)
      max=tmp[i];
  }
  printf("%f", max);
  return 0;
}
