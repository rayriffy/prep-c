#include <stdio.h>
int main() {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a<=100 && b<=100 && c<=100) {
    printf("%d",(a*10/100)+(b*40/100)+(c*50/100));
  }
  return 0;
}