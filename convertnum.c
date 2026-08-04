#include<stdio.h>
int main()
{
 int num;
printf("enter the number(1-5) :");
scanf("%d",&num);
switch(num)
{
case 1:
      printf("1.one");
      break;
case 2:
     printf("2.two");
     break;
case 3:
     printf("3.three");
    break;
case 4:
     printf("4.four");
   break;
case 5:
    printf("5.five");
   break;
default :
   printf("invalid number");
   break;
}
return 0;
}