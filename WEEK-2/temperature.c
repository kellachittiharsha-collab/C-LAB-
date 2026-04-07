#include <stdio.h>

int main() 
{
    float celsius, fahrenheat;
    printf("REGD NO: 25331A05D0\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheat = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheat: %.2f\n", fahrenheat);

    printf("Enter temperature in Fahrenheat: ");
    scanf("%f", &fahrenheat);

    celsius = (fahrenheat - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
