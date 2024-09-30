#include <stdio.h>
int main() 
{
  int a,b,temp;
  a=2,b=3;
  temp=a;
  a=b;
  b=temp;
  printf("%d\n%d\n",a,b);
}
