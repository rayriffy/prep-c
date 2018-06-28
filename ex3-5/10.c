#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[15]={0,0,0,1,1,3,4,5,5,6,6,6,6,6,7},x,count=0;
  scanf("%d",&x);
  for(int i=0;i<15;i++) {
    if(x==a[i])
      count++;
  }
  if(count>0)
    printf("Found %d elements.",count);
  else
    printf("Not Found.");
  return 0;
}