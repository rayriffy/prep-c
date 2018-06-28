#include <stdio.h>
int main() {
  int x;
  scanf("%d",&x);
  if(x<15000) {
    printf("%.2f", x*0.1);
  } else {
    printf("%.2f", x*0.15);
  }
  return 0;
}