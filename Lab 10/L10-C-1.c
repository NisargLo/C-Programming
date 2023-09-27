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
	for(a=1;a<=c;a++) {
		p=(p*r);
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
