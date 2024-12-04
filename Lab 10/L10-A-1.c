//Find out sum of first and last digit of a given number

#include<stdio.h>
void main(){
	int n=0,r,s=0;
	printf("Enter NO. - ");
	scanf("%d",&n);
	r=n%10;
	while(n>=10) {
		n=n/10;
	}
	s=r+n;
	printf("Sum = %d",s);
}

