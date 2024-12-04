//Calculate sum of two numbers using pointer

#include<stdio.h>
void main(){
	int n1;
	int n2;
	int s;
	int *pn1;
	int *pn2;
	int *ps;
	pn1=&n1;
	pn2=&n2;
	ps=&s;
	printf("Enter NO. 1 : ");
	scanf("%d",&n1);
	printf("Enter NO. 2 : ");
	scanf("%d",&n2);
	*ps=*pn1+*pn2;
	printf("\nSum = %d",*ps);
}
