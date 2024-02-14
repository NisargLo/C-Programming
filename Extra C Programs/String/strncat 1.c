// n String Concatination [join s2 after s1]

#include<stdio.h>
#include<string.h>
void main(){
     int n;
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);
     printf("Enter NO. : ");
     scanf("%d",&n);
     strncat(s1,s2,n);
     printf("String 1 : %s",s1);
}