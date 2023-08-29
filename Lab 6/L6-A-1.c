#include<stdio.h>
void main() {
	float a,b,c,d,e,f;
	char o;
	printf("Enter any 1 Operaion from +,-,*,/ ");
	scanf("%c",&o);
	printf("Enter 2 NO. : ");
	scanf("%f",&a);
	scanf("%f",&b);
	if(o=='+'){
		c=a+b;
		printf("%f",c);
	}
	else if(o=='-'){
		d=a-b;
		printf("%f",d);
	}
	else if(o=='*'){
		e=a*b;
		printf("%f",e);
	}
	else if(o=='/'){
		f=a/b;
		printf("%f",f);
	}
	else{
		printf("Enter Valid Mathematical Operator");
	}
}
