#include<stdio.h>
void square();
int main()
{
 square();
}
void square()
{
 int a, square;
printf("enter the value of a:");
scanf("%d",&a);
square=a*a;
printf("square=%d",square);
}

