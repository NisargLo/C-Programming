//Print average of three numbers. (with & without scanf)

#include<stdio.h>
void main (){
	float a,b,c,d;
	printf("Enter Value:");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	d=(a+b+c)/3;
	printf("Average of these values =%f",d);
}
