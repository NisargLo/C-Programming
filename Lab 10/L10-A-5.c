//Print given number in reverse order

#include<stdio.h>
void main(){
	int n,s=0,r,a;
	printf("Enter Number : ");
	scanf("%d",&n);
	a=n;
	while(n!=0) {
		r=n%10;
		n=n/10;
		s=(s*10)+r;
	}
	printf("Reverse of %d = %d",a,s);
}

