#include<stdio.h>
int main()
{
 int a=0,b=1,c,term,i;
printf("enter the number of terms:");
scanf("%d",&term);
printf("%d %d",a,b);
for(i=3;i<=term;i++)
{
 c=a+b;
 a=b;
 b=c;
printf("%d",c);

}
return 0;
}