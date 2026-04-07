#include<stdio.h>
int main () {
    int arr[]={10,20,30,40};
    printf("REGD NO:25331A05D0\n");
    for (int i=0;i<4;i++) {
        printf("%d\n",*(arr+i));
    }
    return 0;
}
