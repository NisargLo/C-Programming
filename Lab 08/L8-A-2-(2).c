//Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.

#include<stdio.h>
void main(){
	int i=1,n=0,c=1;
	while(i<=10) {
		if(i%2!=0){
			printf("\n%d",i);
		}
		i++;
	}
	printf("\nEnter Number : ");
	scanf("%d",&n);
	while(c<=n) {
		if(c%2!=0){
			printf("\n%d",c);
		}
		c++;
	}
}

