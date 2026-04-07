#include <stdio.h>
int main() 
{
    int i;
    printf("REGD NO: 25331A05D0\n");
    printf("Using break statement:\n");
    for(i = 1; i <= 10; i++) 
    {
        if(i == 5)
        {
            break; 
        }
        printf("%d ", i);
    }

    printf("\n");

    printf("Using continue statement:\n");
    for(i = 1; i <= 10; i++) 
    {
        if(i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
