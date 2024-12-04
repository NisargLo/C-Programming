//1st occurance Character inside String

#include<stdio.h>
void main(){
     int i;
     char s1[100],o;
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter Character : ");
     scanf("%c",&o);
     for(i=0;s1[i]!='\0';i++){
          if(o==s1[i]){
               for(;s1[i]!='\0';i++){
                    printf("%c",s1[i]);
               }
          }
     }
}