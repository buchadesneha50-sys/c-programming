#include<stdio.h>
int main()
{
 int ch , menu;
printf("1.pizza\n");
printf("2.coffe\n");
printf("3.sandwich\n");
printf("enter your choice");
scanf("%d",&menu);
switch(menu)
{
  case 1:
         printf("pizza");
         break;
 case 2:
          printf("coffe");
          break;
 case 3:
        printf("sandwich");
        break;
 case 4:
      printf("out of menu");
      break;
}
return 0;
}


