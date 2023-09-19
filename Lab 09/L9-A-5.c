#include<stdio.h>
void main() {
	int n=0,i=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	printf("Factors are : ");
	while(i<=n) {
		if(n%i==0) {
			printf("\n%d",i);
		}
		i++;
	}
}
