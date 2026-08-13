#include<stdio.h>
void sub(int x,int y);
int main()
{
 int x,y;
printf("enter the two numbers:");
scanf("%d%d",&x,&y);
sub(x,y);
return 0;
}
void sub(int x,int y)
{
 int sub;
 sub=x-y;
printf("sub=%d",sub);
}
 
