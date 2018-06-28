#include <stdio.h>
int main() {
  float x,y;
  char z;
  scanf("%f %f %c",&x,&y,&z);
  if(z==43) {
    printf("%f",x+y);
  } else if(z==45) {
    printf("%f",x-y);
  } else if(z==42) {
    printf("%f",x*y);
  } else if(z==47) {
    printf("%f", x/y);
  }
  return 0;
}