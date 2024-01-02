//Check whether the given number is Armstrong or not

#include<stdio.h>
void main() {
	int n,r,c=0,p,a,b=0,d;
	printf("Enter NO. : ");
	scanf("%d",&n);
	d=n;
	while(n!=0) {
		n=n/10;
		c++;
	}
	n=d;
	while(n!=0) {
		r=n%10;
		p=1;
		a=1;
	while(a<=c) {
	p=(p*r);
	a++;
	}
	b=b+p;
	n=n/10;
	}
	if(b==d){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
}
