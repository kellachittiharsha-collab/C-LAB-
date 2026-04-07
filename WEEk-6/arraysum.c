#include<stdio.h>
  int main() {
  int arr[25],i,n;
  int sum=0;
  printf("REGD NO: 25331A05D0\n");
  printf("The number of elements:");
  scanf("%d",&n);
  printf("The elements in the array:");
  for (i=0;i<n;i++) {

  scanf("%d",&arr[i]);
 
  }
  for(i=0;i<n;i++) {
  sum=sum+arr[i];
  }
 
  printf("The sum of the elements:=%d\n",sum);
 
   }
