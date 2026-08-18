#include<stdio.h>
int cube();
int main()
{
 int result;
result=cube();
printf("cube=%d",result);
return 0;
}
int cube()
{
 int cube,a;
printf("enter the value of a:");
scanf("%d",&a);
cube=a*a*a;
return cube;
}