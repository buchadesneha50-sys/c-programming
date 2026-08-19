#include<stdio.h>
int square(int a);
int main()
{
 int result;
 result=square(a);
return 0;
}
int square(int a)
{
 int a,square;
printf("enter the number:");
scanf("%d",&a);
square =a*a;
printf("square=%d",square);
return square;
}