#include<stdio.h>
  int ncr(int n,int r) {
      if (r==0 || r==n)
          return 1;
      else 
          return ncr(n-1,r-1) + ncr(n-1,r);
      }
  int main ()  {
      int n,r;
       printf("REGD NO: 25331A05D0\n");
      printf("Enter the numbers:");
      scanf("%d %d",&n,&r);
      if (n<r) {
      printf("Invalid because n must be greater than r");
      }
        else  {
       printf("The value of the ncr(%d,%d)=%d",n,r,ncr(n,r));
        }
        return 0;
        }
