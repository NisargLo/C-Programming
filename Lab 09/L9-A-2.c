#include<stdio.h>
void main(){
	int n=0,i=1;
	printf("Enter Number : ");
	scanf("%d",&n);
		printf("\nMultiplication Table of %d : ",n);
	while(i<=10) {
		printf("\n%d x %d = %d",n,i,n*i);
		i++;
	}
}

