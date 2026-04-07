#include <stdio.h>
int sum(int a, int b); 
int main()
{
	int num1, num2, result;
           printf("REGD NO: 25331A05D0\n");
	printf("Enter first number: ");
	scanf("%d", &num1);
 
	printf("Enter second number: ");
	scanf("%d", &num2);
	result = sum(num1, num2);
	printf("Sum = %d", result);
	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
