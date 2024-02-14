//Last occurance Character inside String

#include<stdio.h>
void main(){
     int i,j;
     char s1[100],o;
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter Character : ");
     scanf("%c",&o);
     for(i=0;s1[i]!='\0';i++){ 
     }
     for(j=i-1;j>=0;j--){
          if(o==s1[j]){
               for(;s1[j]!='\0';j++){
               printf("%c",s1[j]);
               }
               break;
          }
     }
}