#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x,y;
  scanf("%d %d",&x,&y);
  for(int i=1;i<=y;i++) {
    printf("%d x %d = %d\n",x,i,x*i);
  }
  return 0;
}
