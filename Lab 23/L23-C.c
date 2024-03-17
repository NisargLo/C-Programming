/*
     Write following programs in C. 
     
     You are given a string s, which contains stars *. 
     In one operation, you can: 
     Choose a star in s. 
     Remove the closest non-star character to its left, as well as remove the star itself. 
     Return the string after all stars have been removed. 
     
     Note: 
     The input will be generated such that the operation is always possible. 
     It can be shown that the resulting string will always be unique.
*/

#include<stdio.h>
void main(){
     char s[100];
     int i,n,x,c=0,y;
     printf("Enter string of Stars ( * ) : ");
     gets(s);
     printf("Choose a Star in string : ");
     scanf("%d",&n);
     for(i=0;s[i]!='\0';i++){
          if(s[i]=='*'){
               c++;
               if(c==n){
                    x=i;
                    break;
               }
          }
     }
     for(i=x;i>=0;i--){
          if(s[i]!='*'){
               y=i;
               break;
          }
     }
     printf("\nNew String 1 : ");
     for(i=0;s[i]!='\0';i++){
          if(i!=x && i!=y){
               printf("%c",s[i]);
          }
     }
     printf("\nNew String 2 : ");
     for(i=0;s[i]!='\0';i++){
          if(s[i]!='*'){
               printf("%c",s[i]);
          }
     }
}