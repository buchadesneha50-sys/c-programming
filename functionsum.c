#include<stdio.h>
void sum();
int main()
{
  sum();
  sum();
}
void sum()
{
 int a,b,sum=0;
printf("enter the value of a and b:");
scanf("%d%d",&a,&b);
sum = a+b;
printf("sum=%d\n",sum);
}
