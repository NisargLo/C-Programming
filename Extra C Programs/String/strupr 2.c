//Convert all letters of string to Upper Case

#include<stdio.h>
void main(){
     int i;
     char s1[100];
     printf("Enter String 1 : ");
     gets(s1);
     for(i=0;s1[i]!='\0';i++){
          if(s1[i]>='a' && s1[i]<='z'){
               s1[i]-=32;
          }
     }
     puts(s1);
}