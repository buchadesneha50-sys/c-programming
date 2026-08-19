#include<stdio.h>
int average();
int main()
{
  int a,b,c,result;
result=average();
return 0;
}
int average()
{
  int average,a,b,c;
printf("enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
average = (a+b+c)/3;
printf("average =%d",average);
return average;
}
