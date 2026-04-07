#include<stdio.h>
  int main() {
  int a[50][50],b[50][50],c[50][50];
  int i,j,rows,cols;
  printf("REGD NO: 25331A05D0\n");
  printf("The number of the rows:");
  scanf("%d",&rows);
  printf("The number of the cols");
  scanf("%d",&cols);
  printf("The first matrix elements:");
  for (i=0;i<rows;i++) {
   for (j=0;j<cols;j++) {
   scanf("%d",&a[i][j]);
   }
  }
 printf("The second matrix elements:");
  for (i=0;i<rows;i++) {
   for (j=0;j<cols;j++) {
    scanf("%d",&b[i][j]);
    }
    }
   for (i=0;i<rows;i++) {
   for (j=0;j<cols;j++)  {
    c[i][j]=a[i][j]+b[i][j];
    }
   }
   printf("The final matrix:\n");
    for (i=0;i<rows;i++)  {
    for  (j=0;j<cols;j++)  {
      printf("%d  ",c[i][j]);
    }
   printf("\n");
     }
    }
