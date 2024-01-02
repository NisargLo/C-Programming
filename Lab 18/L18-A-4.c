//Return the maximum of three floating-point numbers

#include<stdio.h>
float max(float,float,float);
void main(){
	float a,b,c,result;
	printf("Enter Float NO. 1 : ");
	scanf("%f",&a);
	printf("Enter Float NO. 2 : ");
	scanf("%f",&b);
	printf("Enter Float NO. 3 : ");
	scanf("%f",&c);
	result=max(a,b,c);
	printf("Maximum of 3 NO. = %f",result);
}
float max(float a,float b,float c){
	float max;
		if(a>b && a>c){
			max=a;
		}
			if(b>a && b>c){
			max=b;
		}
			if(c>a && c>b){
			max=c;
		}
		return max;
}
