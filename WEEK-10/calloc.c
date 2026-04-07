#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
int i;
printf("REGD NO: 25331A05D0\n");
ptr = (int*) calloc(3, sizeof(int));
printf("Before realloc:\n");
for(i = 0; i < 3; i++)
{
printf("%d ", ptr[i]);
}
ptr = (int*) realloc(ptr, 5 * sizeof(int));
ptr[3] = 10;
ptr[4] = 20;
printf("\nAfter realloc:\n");
for(i = 0; i < 5; i++)
{
printf("%d ", ptr[i]);
}
free(ptr);
return 0;
}
