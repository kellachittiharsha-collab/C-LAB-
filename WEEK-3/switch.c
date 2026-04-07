#include<stdio.h>
int main()
{
int a,b,choice;
printf("REGD NO: 25331A05D0\n");
printf("Enter the 2 numbers:");
scanf("%d %d",&a,&b);
printf("\n1.addition \n2.subtraction \n3.multification\n4.division\n");
printf("Enter the choice:");
scanf("%d",&choice);
switch (choice) {
case 1:
printf("result=%d\n",a+b);
break;
case 2:
printf("result=%d\n",a-b);
break;
case 3:
printf("result=%d\n",a*b);
break;
case 4:
printf("result=%d\n",a/b);
break;
default:
printf("Invalid choice\n");
return 0;
}
}
