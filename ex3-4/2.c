#include <stdio.h>

int main(int argc, char const *argv[])
{
  for(int i=1;i<=40;i++) {
    if(i==1) {
      printf("1");
    }
    if(i%3!=0 && i!=1) {
      printf(",%d",i);
    }
  }
  return 0;
}
