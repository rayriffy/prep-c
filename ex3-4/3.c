#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a,b,cache,sum=0;
  scanf("%d %d",&a,&b);
  if(a>b) {
    cache=a;
    a=b;w
    b=cache;
  }
  for(int i=a;i<=b;i++)  {
    sum+=i;
  }
  printf("%d",sum);
  return 0;
}
