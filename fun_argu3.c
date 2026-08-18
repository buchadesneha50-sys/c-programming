#include<stdio.h>
void square(int a);
int main()
{
  int a;
printf("enter the a:");
scanf("%d",&a);
square(a);
return 0;
}
void square(int a)
{
  int square;
square=a*a;
printf("square=%d",square);
}
