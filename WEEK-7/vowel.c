#include<stdio.h>
int main ()
{
 char str[100];
 int i,count=0;
 printf("REGD NO: 25331A05D0\n");
 printf("Enter the string:");
 fgets(str,sizeof(str),stdin);
 
 for (i=0;str[i]!='\0';i++)

 {
 if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
     str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        count++;
    }
 }
printf("The number of vowels in the string: %d\n",count);
 
return 0;

}
