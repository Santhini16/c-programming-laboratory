#include <stdio.h>
int main() 
{
  int l,b;
  int area,perimeter;
  scanf("%d%d",&l,&b);
  area=l*b;
  perimeter=2*(l+b);
  printf("the area is %d\n",area);
  printf("the perimeter is %d\n",perimeter);
}
