#include <stdio.h>

int main(int argc, char const *argv[])
{
  char c[5] = "FFIYR";

  printf("%c%c%c%c%c\n", c[4], c[2], c[1], c[0], c[3]);

  int p[5] = {3, 2, 1, 4, 0};
  char b[5];
  for(int i = 0 ; i < 5 ; i ++) {
    b[p[i]] = c[i];
  }
  for(int i = 0 ; i < 5 ; i ++) {
    printf("%c",b[i]);
  }
  
  return 0;
}
