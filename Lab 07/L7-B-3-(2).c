// Get a number as a string from user and convert string to integer, string to float as per user’s choice.
// (Hack Way)

#include<stdio.h>
void main(){
     char s[100],c;
     int i,x=0;
     printf("Enter String which is (Number) : ");
     gets(s);
     printf("Do you want to convert string to integer or float ? ");
     scanf("%c",&c);
     switch(c){
          case 'i': printf("\nInteger - ");
                    for(i=0;s[i]!='\0';i++){
                         if(s[i]!='\0'){
                              printf("%c",s[i]);
                         }
                         if(s[i+1]=='.'){
                              break;
                         }
                    }
          break;
          case 'f': printf("\nFloat - ");
                    for(i=0;s[i]!='\0';i++){
                         if(s[i]!='\0'){
                              printf("%c",s[i]);
                         }
                         if(s[i]=='.'){
                              x=1;
                         }
                         if(s[i+1]=='\0' && x==0){
                              printf(".000000");
                         }
                    }
          break;
     }
}