#include<stdio.h>

int findmax(int x, int y) {
  if(x>y)
    return x;
  else
    return y;
}

int main(int argc, char const *argv[]) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", findmax(findmax(a,b),c));
  return 0;
}