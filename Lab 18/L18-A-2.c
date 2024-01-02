//Find maximum and minimum between two numbers using function

#include<stdio.h>
void max(int a,int b);
void main(){
	int a,b;
	printf("Enter NO. 1 : ");
	scanf("%d",&a);
	printf("Enter NO. 2 : ");
	scanf("%d",&b);
	max(a,b);	
}
void max(int a,int b){
	int max,min;
	if(a>b){
		max=a;
		min=b;
	}
	else{
		max=b;
		min=a;
	}
	printf("Maximum = %d",max);
	printf("\nMinimum = %d",min);
}
