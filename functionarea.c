#include<stdio.h>
void area();
int main()
{
 area();
return 0;
}
void area()
{
  float r,area;
printf("enter the radius:");
scanf("%f",&r);
area = 3.14*r*r;
printf("area=%.2f",area);
}
