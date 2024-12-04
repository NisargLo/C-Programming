//String Reverse

#include<stdio.h>
void main(){
     int i,j;
     char s1[100];
     printf("Enter String 1 : ");
     gets(s1);
     for(i=0;s1[i]!='\0';i++){
     }
     i--;
     printf("String 1 : ");
     for(j=i;j>=0;j--){
          printf("%c",s1[j]);
     }
}