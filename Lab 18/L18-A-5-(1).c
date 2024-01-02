//Swap two numbers using call by value

#include<stdio.h>
void swap(int,int);
void main(){
	int a,b;
	printf("Enter NO. 1 : ");
	scanf("%d",&a);
	printf("Enter NO. 2 : ");
	scanf("%d",&b);
	printf("\nBefore - %d  %d",a,b);
	swap(a,b);
}
void swap(int a,int b){
	int temp=a;
		a=b;
		b=temp;
	printf("\nAfter - %d  %d",a,b);	
}
