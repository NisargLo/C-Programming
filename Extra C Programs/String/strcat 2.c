//String Concatination [join s2 after s1]

#include<stdio.h>
void main(){
     int i,j;
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);
     for(i=0;s1[i]!='\0';i++){
     }
     for(j=0;s2[j]!='\0';j++,i++){
          s1[i]=s2[j];
     }
     s1[i]='\0';
     printf("String 1 : %s",s1);
}