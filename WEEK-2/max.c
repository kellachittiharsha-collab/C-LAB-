#include<stdio.h>
int main()
 {
  int a,b,c,max;
  printf("REGD NO: 25331A05D0\n");
  printf("Enter the 3 numbers:");
  scanf("%d %d %d", &a,&b,&c);
  max=(a>b&&a>c)?a:(b>c?b:c);
  printf("maximum number is :%d" , max);
  
  return 0;
 }
