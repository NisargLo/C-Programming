#include<stdio.h>
void main() {
     int a,b,c,max;
     printf("Enter a,b,c");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     max=(a>b)?(a>c?a:c):(b>c?b:c);
     printf("Largest Number is %d",max);
}