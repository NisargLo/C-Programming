//Find factorial of a number using function

#include<stdio.h>
void fac(int);
void main(){
	int n;
	printf("Enter NO. : ");
	scanf("%d",&n);
	fac(n);
}
fac(int n){
	int m=1,i;
	for(i=1;i<=n;i++){
		m=m*i;
	}
	printf("%d Factorial = %d",n,m);
}
