//Add two numbers using function

#include<stdio.h>
int add(int a,int b);
void main(){
	int a,b,result;
	printf("Enter NO. 1 : ");
	scanf("%d",&a);
	printf("Enter NO. 2 : ");
	scanf("%d",&b);
	result=add(a,b);
	printf("ANS. = %d",result);
}
int add(int a,int b){
	int c=a+b;
	return c;
}

