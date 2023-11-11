//Scan a character string passed as an argument and convert all lowercase string to uppercase string

#include<stdio.h>
void upper_case(char s1[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
          if(s1[i]>='a' && s1[i]<='z'){
               s1[i]-=32;
          }
     }
     printf("\n%s",s1);
}
void main(){
     char s1[100];
     printf("Enter String 1 : ");
     gets(s1);
     upper_case(s1);
}