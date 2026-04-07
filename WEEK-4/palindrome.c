#include<stdio.h>
int main()
{
int num,original,reverse=0,digits;
printf("REGD NO: 25331A05D0\n");
printf("Enter the number:");
scanf("%d",&num);
original=num;
while(num>0)
{
digits=num%10;
reverse=reverse*10+digits;
num=num/10;
}
if(original==reverse)
printf("The number is palindrome");
else
printf("The number is not a palindrome");
return 0;
}
