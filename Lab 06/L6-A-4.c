//Input an integer number and check the last digit of number is even or odd.

#include<stdio.h>
void main() {
     int n;
     printf("Enter an Integral NO. : ");
     scanf("%d",&n);
     n=n%10;
     (n%2==0)?(printf("%d digit is Even",n)):(printf("%d digit is Odd",n));
}