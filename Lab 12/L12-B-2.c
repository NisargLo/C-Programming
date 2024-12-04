//Estimate the value of the mathematical constant e. (Formula: ?? = 1 + 1/1! + 1/2! + ... + 1/n!)

#include<stdio.h>
void main() {
	float n,i,j,m=1,s=1;
	printf("Enter NO. : ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		m=1;
		for(j=1;j<=i;j++){
			m=m*j;
		}
		s=s+1/m;
	}
	printf("e = %f",s);
}
