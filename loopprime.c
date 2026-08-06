#include<stdio.h>
int main()
{ 
 int num,flag=0,i;
printf("enter the number:");
scanf("%d",&num);
if(num<=1)
flag=1;
for(i=2;i<num;i++)
{
 if(num%i==0)
{
  flag=1;
break;
}
}
if(flag==1)
   printf("not prime number");
else
  printf("prime number");
return 0;
}


