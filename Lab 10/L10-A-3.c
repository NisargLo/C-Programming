//Find whether the given number is prime or not

#include<stdio.h>
void main(){
	int n=0,c=1,a=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(c<=n){
		if(n%c==0){
			a++;
		}
		c++;
	}
	if(a==2){
		printf("\nPrime");
	}
	else{
		printf("\nNot Prime");
	}
}

