#include<stdio.h>
int main()
{
int marks;
printf("REGD NO: 25331A05D0\n");
printf("Enter the marks:");
scanf("%d",&marks);
if (marks>=80)
printf("Grade=A\n");
else if(marks>=70)
printf("Grade=B\n");
else if(marks>=60)
printf("Grade=C\n");
else if(marks>=50)
printf("Grade=D\n");
else 
printf("Grade=fail\n");
return 0;
}
