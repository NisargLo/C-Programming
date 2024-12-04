//Search String inside String

#include<stdio.h>
void main(){
     int i,j,b;
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);
     for(i=0,j=0;s1[i]!='\0';i++){
          if(s2[j]==s1[i]){
               b=i;
               for(;s2[j]!='\0';b++,j++){
                    if(s2[j]!=s1[b]){
                         j=0;
                         break;
                    }
                    if(s2[j]==s1[b] && s2[j+1]=='\0'){
                         for(;s1[i]!='\0';i++){
                              printf("%c",s1[i]);
                         }
                    }
               }
          }   
     }
}