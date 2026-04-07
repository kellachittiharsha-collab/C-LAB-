#include<stdio.h>
#include<string.h>

int main() {
  char str1[100],str2[100],copystr[100] ;
  int result,length;
  printf("REGD NO: 25331A05D0\n");
  printf("Enter the first string:");
  scanf("%s",str1);
  printf("Enter the second string:");
  scanf("%s",str2);
  length=strlen(str1);
  printf("The length of the first string: %d\n",length);
  strcpy(copystr,str1);
  printf("The copied string: %s\n",copystr);
  strcat(str1,str2);
  printf("The concantenated string: %s\n",str1);
  result=strcmp(str1,str2);
  if (result==0)
  {
      printf("The given strings are equal");
  }
  else 
  {
       printf("The given strings are not equal");
  }
  return 0;

  }
