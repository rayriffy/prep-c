#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[100];
  int i;
  for(i=0;i<100;i++) {
    if(i%2!=0) 
      a[i]=1;
    else
      a[i]=0;
  }
  return 0;
}
