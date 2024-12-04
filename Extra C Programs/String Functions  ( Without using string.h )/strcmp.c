//String Compare

#include<stdio.h>
void main() {
     int ls1=0,ls2=0,i;
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);
     for(i=0;s1[i]!='\0';i++){
          ls1++;
     }
     for(i=0;s2[i]!='\0';i++){
          ls2++;
     }
     if(ls1!=ls2){
          for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
               if(s1[i]!='\0' && s2[i]=='\0'){
                    printf("String 1 > String 2");
                    break;
               }
               if(s1[i]=='\0' && s2[i]!='\0'){
                    printf("String 1 < String 2");
                    break;
               }
          }
     }
     else{
          printf("String 1 = String 2");
     }
}