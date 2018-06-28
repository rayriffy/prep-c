#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[5]={3,4,3,2,-7};
  int i,x,found=0;
  scanf("%d",&x);
  for(i=0;i<5;i++) {
    if(x==a[i]) {
      printf("%d ",i);
      found=1;
    }
  }
  if(found!=1) {
    printf("-1");
  }
  return 0;
}
