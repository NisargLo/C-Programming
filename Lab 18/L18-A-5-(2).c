//Swap two numbers using call by reference

#include<stdio.h>
void swap(int *,int *);
void main(){
	int a,b;
	printf("Enter No. 1 : ");
	scanf("%d",&a);
	printf("Enter No. 2 : ");
	scanf("%d",&b);
	printf("\nBefore - %d  %d",a,b);
	swap(&a,&b);
	printf("\nAfter - %d  %d",a,b);
}
void swap(int *a,int *b){
	int temp=*a;
		*a=*b;
		*b=temp;
}
