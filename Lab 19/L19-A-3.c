//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()

#include<stdio.h>
#include<strings.h>
void main() {
     int d;
     char a[100],b[100],c[100];
     printf("Enter String 1 : ");
     gets(a);
     printf("Enter String 2 : ");
     gets(b);
     printf("\nLenght of String 1 = %d",strlen(a));
     d=strcmp(a,b);
     if(d==0){
          printf("\nString 1 = String 2");
     }
     else if(d>0){
          printf("\nString 1 > String 2");
     }
     else{
          printf("\nString 1 < String 2");
     }
     strcpy(c,a);
     strcpy(a,b);
     printf("\nModified String 1 (Copy) = ");
     puts(a);
     strcpy(a,c);
     strcat(a,b);
     printf("\nModified String 1 (Catination) = ");
     puts(a);
     strcpy(a,c);
     printf("\nString 1 (Upper Case) : %s",strupr(a));
     printf("\nString 1 (Lower Case) : %s",strlwr(a));
     strcpy(a,c);
     printf("\nString 1 (Reverse) : %s",strrev(a));
}