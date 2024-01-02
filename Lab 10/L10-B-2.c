//Find whether the given number is prime or not using flag

#include<stdio.h>
void main() {
	int n=0,i=2,flag;
	printf("Enter NO. : ");
	scanf("%d",&n);
	while(i<n) {
		if(n%i==0){
			flag=1;
		}
		i++;
	}
	if(flag==0){
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
}
