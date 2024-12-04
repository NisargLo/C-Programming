//Generate Fibonacci series of N given number using function name fibbo()

#include<stdio.h>
void fibbo(int);
void main(){
	int n;
	printf("Enter NO. of Terms of Fibbonaci Series : ");
	scanf("%d",&n);
	printf("\nFibonacci Series - 0, 1, ");
	fibbo(n);
}
void fibbo(int n){
	int t1=0,t2=1,nt,i;
	for(i=0;i<=n;i++){
		nt=t1+t2;
		t1=t2;
		t2=nt;
		printf("%d, ",nt);
	}
}
