 #include <stdio.h>
void displayArray(int arr[], int size);

int main() 
{
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("REGD NO: 25331A05D0\n");
    displayArray(numbers, 5);
    return 0;
}
void displayArray(int arr[], int size) {
    int i;
    printf("Array elements are:\n");

    for (i = 0; i < size; i++) 
{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
