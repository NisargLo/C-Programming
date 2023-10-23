//Swap value of two numbers using pointer

#include<stdio.h>
void main(){
	int n1;
	int n2;
	int temp;
	int *pn1;
	int *pn2;
	pn1=&n1;
	pn2=&n2;
	printf("Enter NO. 1 : ");
	scanf("%d",&n1);
	printf("Enter NO. 2: ");
	scanf("%d",&n2);
	temp=*pn1;
	*pn1=*pn2;
	*pn2=temp;
	printf("\nNo. 1 = %d",*pn1);
	printf("\nNo. 2 = %d",*pn2);
}
