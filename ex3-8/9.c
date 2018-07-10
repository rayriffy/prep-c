#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  float x[3],y[3],distance[3];
  int i;
  for(i=0;i<3;i++) {
    scanf("%f %f",&x[i],&y[i]);
  }
  distance[0]=sqrt(pow(x[0]-x[1],2)+pow(y[0]-y[1],2));
  distance[1]=sqrt(pow(x[0]-x[2],2)+pow(y[0]-y[2],2));
  distance[2]=sqrt(pow(x[2]-x[1],2)+pow(y[2]-y[1],2));
  if((pow(distance[0],2)+pow(distance[1],2))==pow(distance[2],2))
    printf("Yes");
  else if((pow(distance[0],2)+pow(distance[2],2))==pow(distance[1],2))
    printf("Yes");
  else if((pow(distance[2],2)+pow(distance[1],2))==pow(distance[0],2))
    printf("Yes");
  else
    printf("No");
  return 0;
}