#include<stdio.h>
void main() {
	int n,i=1,s=0,a;
	printf("Enter NO. : ");
	scanf("%d",&n);
	a=n;
	while(i<a) {
		if(n%i==0){
			s=s+i;
		}
		i++;
	}
	if(s==a){
		printf("Perfect Number");
	}
	else{
		printf("Not Perfect Number");
	}
}
