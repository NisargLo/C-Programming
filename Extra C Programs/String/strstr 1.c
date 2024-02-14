//Search String inside String

#include<stdio.h>
#include<string.h>
void main() {
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);
     printf("\nString after %s is %s",s2,strstr(s1,s2));
}