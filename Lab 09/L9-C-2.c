#include<stdio.h>
void main() {
	int n=0,i=1,r;
	printf("Enter Decimal NO. : ");
	scanf("%d",&n);
	printf("Binary of %d = ",n);
	while(n!=0){
		r=n%2;
		n=n/2;
		printf("%d",r);
	}
}

