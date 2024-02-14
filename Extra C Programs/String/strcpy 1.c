//String Copy (s2 to s1, s2 is unchanged)

#include<stdio.h>
#include<string.h>
void main(){
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);
     strcpy(s1,s2);
     printf("String 1 : %s",s1);
}