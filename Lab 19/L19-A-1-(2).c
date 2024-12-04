//Find factorial of a number using recursive function

#include<stdio.h>
int fac(int);
void main() {
	int n,result;
	printf("Enter NO. : ");
	scanf("%d",&n);
	result=fac(n);
	printf("%d Factorial = %d",n,result);	
}
int fac(int n){
	int i=1,m=n;
	if(n-i>0){
		m=m*fac(n-i);
		i++;
	}
	else{
		return m;
	}
}
