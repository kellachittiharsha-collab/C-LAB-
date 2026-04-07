#include<stdio.h>
int main()
{
int a,b,c;
printf("REGD NO: 25331A05D0\n");
printf("Enter the 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("The largest number is %d",a);
}
else if(b>c)
{
printf("The largest number is %d",b);
}
else 
{
printf("The largest number is %d",c);
}
return 0;
}
