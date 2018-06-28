#include <stdio.h>

int main(int argc, char const *argv[])
{
  int is_done=0,x,count=0;
  do {
    scanf("%d",&x);
    count++;
    if(x<3)
      is_done=1;
    if(x%3==0)
      printf("%d",x);
  } while(!is_done && count<=10); 
  return 0;
}
