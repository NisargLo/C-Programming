//Check whether number is even number or odd number using conditional operator.

#include<stdio.h>
void main() {
     int n;
     printf("Enter Integer : ");
     scanf("%d",&n);
     (n%2==0)?(printf("%d is Even",n)):(printf("%d is Odd",n));
}