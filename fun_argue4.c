#include<stdio.h>
void area(int l,int b);
int main()
{
  int l,b;
printf("enter length and breadth:");
scanf("%d%d",&l,&b);
area(l,b);
return 0;
}
void area(int l,int b)
{
  int area;
area=l*b;
printf("area=%d",area);
}