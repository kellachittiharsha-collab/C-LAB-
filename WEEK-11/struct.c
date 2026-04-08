#include<stdio.h>

 struct student {
    int roll;
    char name[15];
    float marks;
   };

  int main () {
    printf("REGD NO: 25331A05D0\n");
    struct student s;
    s.roll=2;
    printf("Enter the name:");
    scanf("%s",s.name);
    s.marks=965.25;
    printf("Roll no: %d\n",s.roll);
    printf("student name: %s\n",s.name);
    printf("marks:%.2f\n",s.marks);
    return 0;
    } 
