#include<stdio.h>
void main() {
	 int n=0,i=2,a=1,b;
	 printf("Enter Number : ");
	 scanf("%d",&n);
	 b=n;
	 while(i<=b) {
	 	a=a*n;
	 	n--;
	 	i++;
	 }
	 printf("Factorial of %d = %d",b,a);
}
