#include<stdio.h>
void sum(int a,int b);
int main()
{
  int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
sum(a,b);
return 0;
}
void sum(int a,int b)
{
  int sum;
 sum=a+b;
 printf("sum=%d",sum);
}

