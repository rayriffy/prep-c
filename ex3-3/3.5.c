#include <stdio.h>
int main() {
  char x;
  scanf("%c",&x);
  if(x>=65 && x<=90) {
    printf("%c",x+32);
  } else if(x>=65+32 && x<=90+32) {
    printf("%c",x-32);
  }
  return 0;
}