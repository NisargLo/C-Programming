#include<stdio.h>
void main() {
     int n;
     printf("Enter an Integral NO. : ");
     scanf("%d",&n);
     n=n%10;
     (n%2==0)?(printf("%d digit is Even",n)):(printf("%d digit is Odd",n));
}