//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n

#include<stdio.h>
void main(){
	int n=0,a=1,b,c=1,d,s1=0,s2;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(a<n) {
		b=(a*a);
		printf("%d + ",b);
		a++;
		s1=s1+b;
	}
	d=(n*n);
	printf("%d",d);
	s2=s1+(n*n);
	printf("\nSum of series = %d",s2);
}

