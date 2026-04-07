 #include<stdio.h>
  int main() {
   int a[20][20],tr[20][20];
   int i,j,rows,cols;
   printf("REGD NO: 25331A05D0\n");
   printf("The number of rows:");
    scanf("%d",&rows);
     printf("The number of cols:");
     scanf("%d",&cols);
     printf("The elements of matrix:");
      for (i=0;i<rows;i++) {
     for (j=0;j<cols;j++) {
       scanf("%d",&a[i][j]);
      } 
      }
     printf("The given matrix is :\n");
      for (i=0;i<rows;i++)  {
      for (j=0;j<cols;j++)  {
     printf("%d ",a[i][j]);
     }
     printf("\n");
   }
    for (i=0;i<rows;i++)  {  
    for (j=0;j<cols;j++) {
    tr[j][i]=a[i][j];
    } 
    }
    printf("The transpose of the matrix:\n");
     for (i=0;i<cols;i++)  {
     for (j=0;j<rows;j++) {
      printf("%d  " ,tr[i][j]);
       }
       printf("\n");
      } 
      }
