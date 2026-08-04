#include<stdio.h>
int main()
{
  int choice;
  printf("------menu------\n");
  printf("1.tea\n");
  printf("2.coffee\n");
  printf("3.juice\n");
  printf("4.water\n");
printf("Enter your choice :");
 scanf("%d",&choice);
switch(choice)
{
 case 1:
   printf("1.tea");
  break;
 case 2:
   printf("2.coffee");
  break;
  case 3:
  printf("3.juice");
  break;
  case 4: 
  printf("4.water");
  break;
  default :
  printf("out of menu");
 }
return 0;
}
  