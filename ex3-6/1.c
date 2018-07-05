#include <stdio.h>

int showthatshit() {
  printf("42 is the answer!");
}

int main(int argc, char const *argv[])
{
  for(int i=0;i<10;i++) {
    showthatshit();
  }
  return 0;
}
