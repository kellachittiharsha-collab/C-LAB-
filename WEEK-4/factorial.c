#include<stdio.h>
int main()
{
int n,i=1,factorial=1;
printf("REGD NO: 25331A05D0\n");
printf("Enter the number:");
scanf("%d",&n);
if (n<0)
{
printf("The negative factorial is not defined");
}
else
{
while(i<=n)
{
    factorial=factorial*i;
    i++;
}
printf("The factorial of %d= %lld",n,factorial);
}
return 0;
}
