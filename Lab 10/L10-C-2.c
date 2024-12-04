//Find HCF and LCM of two numbers

#include<stdio.h>
void main() {
	int n1,n2,a,b,l,h,i=1;
	printf("Enter 2 NO. : ");
	scanf("%d %d",&n1,&n2);
	if(n1<=n2){
		a=n1;
		b=n2;
	}
	else{
		a=n2;
		b=n1;
	}
	while(i<=a){
		if(a%i==0 && b%i==0){
			h=i;
		}
		i++;
	}
	l=a*b/h;
	printf("HCF = %d",h);
	printf("\nLCM = %d",l);
}