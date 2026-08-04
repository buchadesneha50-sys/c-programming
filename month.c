#include<stdio.h>
int main()
{
 int month;
printf("enter the month :");
scanf("%d",&month);
switch(month)
{
 case 1:
     printf("1. jan");
    break;
case 2:
    printf("2. feb");
    break;
case 3:
     printf("3. mar");
    break;
case 4:
     printf("4. ap");
    break;
case 5:
    printf("5. may");
    break;
case 6:
    printf("6. jun");
    break;
case 7:
     printf("7. july");
    break; 
case 8:
     printf("8. aug");
    break;
case 9:
     printf("9. sep");
    break;
case 10:
     printf("10. oct");
    break;
case 11:
    printf("11. nov");
    break;
case 12:
     printf("12. dec");
    break;
default : 
    printf("error!!!");
  break;
}
return 0;
}
    