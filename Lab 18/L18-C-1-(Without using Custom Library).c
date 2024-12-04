//Create a menu driven program to implement own string.h library. (without using built-in string functions)

#include<stdio.h>
void strlen1(char s1[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
     }
     printf("\nLenght = %d",i);
}
void strcmp1(char s1[],char s2[]){
     int ls1=0,ls2=0,i;
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
void strcpy1(char s1[],char s2[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
          s1[i]=s2[i];
     }
     s1[i]='\0';
     printf("String 1 : ");
     puts(s1);
}
void strcat1(char s1[],char s2[]){
     int i,j;
     for(i=0;s1[i]!='\0';i++){
     }
     for(j=0;s2[j]!='\0';j++,i++){
          s1[i]=s2[j];
     }
     s1[i]='\0';
     printf("String 1 : %s",s1);
}
void strchr1(char s1[],char c){
     int i;
     for(i=0;s1[i]!='\0';i++){
          if(c==s1[i]){
               for(;s1[i]!='\0';i++){
                    printf("%c",s1[i]);
               }
          }
     }
}
void strstr1(char s1[],char s2[]){
     int i,j,b;
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
void strrev1(char s1[]){
     int i,j;
     for(i=0;s1[i]!='\0';i++){
     }
     i--;
     printf("String 1 : ");
     for(j=i;j>=0;j--){
          printf("%c",s1[j]);
     }
}
void strlwr1(char s1[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
          if(s1[i]>='A' && s1[i]<='Z'){
               s1[i]+=32;
          }
     }
     puts(s1);
}
void strupr1(char s1[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
          if(s1[i]>='a' && s1[i]<='z'){
               s1[i]-=32;
          }
     }
     puts(s1);
}
void main(){
     int n;
     char s1[100],s2[100],c;
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 (if necessary!) : ");
     gets(s2);
     printf("Enter Character (if necessary!) : ");
     scanf("%c",&c);
     printf("\nEnter 1 for string lenght");
     printf("\nEnter 2 for string compare");
     printf("\nEnter 3 for string copy");
     printf("\nEnter 4 for string concatination");
     printf("\nEnter 5 for string, print from character");
     printf("\nEnter 6 for string, print from string");
     printf("\nEnter 7 for string reverse");
     printf("\nEnter 8 for string lower case");
     printf("\nEnter 9 for string upper case\n");
     scanf("%d",&n);
     switch(n){
          case 1: strlen1(s1);
          break;
          case 2: strcmp1(s1,s2);
          break;
          case 3: strcpy1(s1,s2);
          break;
          case 4: strcat1(s1,s2);
          break;
          case 5: strchr1(s1,c);
          break;
          case 6: strstr1(s1,s2);
          break;
          case 7: strrev1(s1);
          break;
          case 8: strlwr1(s1);
          break;
          case 9: strupr1(s1);
          break;
          default: printf("Enter NO. from 1 to 9.");
     }
}