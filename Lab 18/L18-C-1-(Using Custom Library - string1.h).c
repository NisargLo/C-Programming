//Create a menu driven program to implement own string.h library. (without using built-in string functions)

#include<stdio.h>
#include"string1.h"
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