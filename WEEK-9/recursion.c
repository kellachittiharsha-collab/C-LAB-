 #include<stdio.h>
  int fibonacci(int n) {
  if (n==0) 
   return 0;
  else if (n==1) 
   return 1;
    else  
     return fibonacci(n-1) + fibonacci(n-2);
    }
    int main () {
     int i,number;
     printf("REGD NO: 25331A05D0\n");
     printf("Enter the number:");
     scanf("%d",&number);
     printf("The fibonacci series:");
     for(i=0;i<number;i++) {
     printf("%d ",fibonacci(i));
     }
     return 0;
     }
