#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr1, *ptr2;
    printf("REGD NO: 25331A05D0\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr1 = (int *)malloc(n * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return 1;
    }
    printf("\nEnter %d elements for malloc array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr1[i]);
    }
    printf("Elements using malloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr1[i]);
    }
    ptr2 = (int *)calloc(n, sizeof(int));
    if (ptr2 == NULL) {
        printf("\nMemory allocation failed using calloc.\n");
        return 1;
    }
    printf("\n\nElements using calloc (initialized to zero):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr2[i]);
    }
    free(ptr1);
    free(ptr2);
    return 0;
}
