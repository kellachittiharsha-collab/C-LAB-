#include <stdio.h>
int main() {
int n,i, a = 0, b = 1, c;
printf("REGD NO: 25331A05D0\n");
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci series: ");
 for (i = 1; i <= n; i++) 
{
printf("%d ", a);
c = a + b;
 a = b;
 b = c;
 }
  return 0;
}
