#include <stdio.h>
int main() {
  int a[3],i,j,x,count[3]={0,0,0},max=-9999999;
  for(i=0;i<3;i++) {
    scanf("%d",&a[i]);
  }
  for(i=0;i<3;i++) {
    x=a[i];
    for(j=0;j<3;j++) {
      if(x==a[j]) {
        count[i]++;
      }
    }
  }
  for(i=0;i<3;i++) {
    if(count[i]>max) {
      max=count[i];
    }
  }
  if(max==3)
    printf("all same");
  else if(max==2)
    printf("neither");
  else if(max==1)
    printf("all different");
  return 0;
}