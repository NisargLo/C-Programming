//Print 1 to 10 then modify program Print 1 to n using while and do while loop

#include<stdio.h>
void main(){
	int i=1,n,c=1;
	while(i<=10) {
		printf("\n%d",i);
		i++;
	}
	printf("\nEnter Number : ");
	scanf("%d",&n);
	while(c<=n) {
		printf("\n%d",c);
		c++;
	}
}
