//Check whether the given number is palindrome or not

#include<stdio.h>
void main() {
	int n,a=0,c,r;
	printf("Enter NO. : ");
	scanf("%d",&n);
	c=n;
	while(n!=0) {
		r=n%10;
		n=n/10;
		a=(a*10)+r;
	}
	if(c==a){
		printf("Pelindrome");
	}
	else{
		printf("Not Pelindrome");
	}
}
