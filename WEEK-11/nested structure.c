#include<stdio.h>
#include<string.h> 
  struct address  {
   char city[25];
   int pincode;
   };
  struct student {
    int roll;
    char name[25];
    float marks;
    struct address addr;
   };
  int main () {
      printf("REGD NO: 25331A05D0\n");
    struct student s;
     strcpy(s.addr.city,"vizianagaram");
     s.addr.pincode=533007;
     s.roll=1;
     strcpy(s.name,"harsha");
     s.marks=956.4;
     printf("Student details\n");
     printf("city:%s\n",s.addr.city);
     printf("pincode:%d\n",s.addr.pincode);
     printf("roll no:%d\n",s.roll);
     printf("name:%s\n",s.name);
     printf("marks:%.2f\n",s.marks);
     return 0;
     }
