//Write a program to find 1+1/2+1/3+1/4+....+1/n

#include<stdio.h>
void main() {
	float n,i,m=1,s=0;
	printf("Enter NO. : ");
	scanf("%f",&n);
	m=1;
	for(i=1;i<=n;i++){
		s=s+1/m;
		m++;
	}
	printf("%f",s);
}
