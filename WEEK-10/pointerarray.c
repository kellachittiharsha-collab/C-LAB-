#include<stdio.h>
int main () {
    int arr[4]={10,20,30,40};
    int *p=arr;
    int *p1=&arr[2];
    int *p2=&arr[3];
    printf("REGD NO:25331A05D0\n");
    printf("pointer increment:\n");
    printf("p=%p,*p=%d\n",p,*p);
    p++;
    printf("p=%p,*p=%d\n",p,*p);
    p--;
    printf("pointer decrement:\n");
    printf("p=%p,*p=%d\n",p,*p);
    printf("pointer arithmetic:\n");
    printf("%d\n",*(p+2));
    printf("subtraction of two pointers\n");
    printf("%d\n",p2-p1);
    return 0;
    }
