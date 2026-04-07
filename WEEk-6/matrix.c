#include<stdio.h>
  int main() {
  int a[50][50];
  int  i,j,rows,cols;
  printf("REGD NO: 25331A05D0\n");
  printf("The number of the rows:");
  scanf("%d",&rows);
  printf("The number of the columns:");
  scanf("%d",&cols);
  printf("The elements in the matrix:");
  for (i=0;i<rows;i++) {
  for (j=0;j<cols;j++) {
  scanf("%d",&a[i][j]);
   }
  }
   printf("The matrix is :\n");
 for (i=0;i<rows;i++) {
  for (j=0;j<cols;j++) {
  printf("%d  ",a[i][j]);
  }  
   printf("\n");
  }
}
