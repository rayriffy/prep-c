#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x,count=0;
  while(count<=10) {
    scanf("%d",&x);
    count++;
    if(x<3)
      break;
    if(x%3==0)
      printf("%d",x);
  }
  return 0;
}
