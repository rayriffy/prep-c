#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i=0;
  float sum=0,x;
  int is_done=0;
  while(!is_done) {
    if(sum>42)
      break;
    scanf("%f",&x);
    if(x<0)
      continue;
    else
      sum+=x;
  }
  return 0;
}
