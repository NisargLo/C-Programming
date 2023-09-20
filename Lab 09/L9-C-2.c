#include<stdio.h>
void main() {
	int n=0,i=1,r,a=0;
	printf("Enter Decimal NO. : ");
	scanf("%d",&n);
	printf("Binary of %d = ",n); 
	while(n!=0){
		r=n%2;
		if(r==0){
			a=a*10; 
		}
		else{
			a=(a*10)+r;
		}
		n=n/2;
	}
	printf("%d",a);
}

