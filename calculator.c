#include<stdio.h>
int main()
{ int a,b,ch,op;
printf("enter two number");
scanf("%d%d",&a,&b);
printf("------menu driven--------\n");
printf("1.add\n");
printf("2.sub\n");
printf("3.mul\n");
printf("4.div\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{ case 1: 
    printf("%d",a+b);
     break;
  case 2:
    printf("%d",a-b);
     break;
  case 3:
   printf("%d",a*b);
    break;
  case 4:
   printf("%d",a/b);
    break;
  case 5:
   printf("default");
}
return 0;
}
