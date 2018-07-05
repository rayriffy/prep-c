#include <stdio.h>
#include <math.h>

int cube(int x) {
  return pow(x,3);
}

int main(int argc, char const *argv[])
{
  int x,y;
  printf("%d %d",cube(10),cube(-2));
  return 0;
}
