#include<stdio.h>
void cube();
int main()
{
 cube();
return 0;
}
void cube()
{
 int a,cube;
printf("enter the value of a:");
scanf("%d",&a);
cube=a*a*a;
printf("cube=%d",cube);
}

