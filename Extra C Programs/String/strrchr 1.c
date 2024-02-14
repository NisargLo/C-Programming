//Last occurance Character inside String

#include<stdio.h>
#include<string.h>
void main() {
     char a[100],o;
     printf("Enter String : ");
     gets(a);
     printf("\nEnter Character : ");
     scanf("%c",&o);
     printf("Characters after %c is %s",o,strrchr(a,o));
}