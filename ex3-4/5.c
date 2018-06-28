#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x=1;
  while(x!=0) {
    scanf("%d",&x);
    if(x==0)
      break;
    if(x%2==0)
      printf("even\n");
    else
      printf("odd\n");
  }
  return 0;
}
