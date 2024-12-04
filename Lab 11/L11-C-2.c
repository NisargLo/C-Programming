//Calculate xy without using power function and without using multiplication.

#include<stdio.h>
void main() {
	int i,j,x,y,s1,a;
	printf("Enter Base : ");
	scanf("%d",&x);
	printf("Enter Exponent : ");
	scanf("%d",&y);
	s1=x;
	a=x;
	for(i=1;i<y;i++){
		for(j=1;j<x;j++){
			s1=s1+a;
//Here s1 = x + x
		}
		a=s1;
//Here firstly, a = x * x
		}
	printf("Answer = %d",s1);
}
