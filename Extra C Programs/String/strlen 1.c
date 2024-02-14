//String Lenght

#include<stdio.h>
#include<string.h>
void main() {
     char a[100]={'N','i','s','a','r','g',' ','L','o','\0'};
     //or char a[100] = "Nisarg";
//  '\0' at last is compulsary
     printf("String Lenght : ");
     printf("%d",strlen(a));
}