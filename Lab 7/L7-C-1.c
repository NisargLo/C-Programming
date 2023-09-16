#include<stdio.h>
void main() {
     int a,b;
     printf("Enter 2 Numbers : ");
     scanf("%d %d",&a,&b);
     if(a^b) {
          printf("Not Equal");
     }
     else{
          printf("Equal");
     }
}