// n String Compare (compares 1st character of string according to ASCII values)

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
     if(strncmp(s1,s2,n)==0){
          printf("Same");
     }
     else if(strncmp(s1,s2,n)>0){
          printf("String 1 > String 2");
     }
     else if(strncmp(s1,s2,n)<0){
          printf("String 1 < String 2");
     }
}