//Count simple interest using function

#include<stdio.h>
float si(float,float,float);
void main(){
	float s,p,r,t,result;
	printf("Enter Rate : ");
	scanf("%f",&r);
	printf("Enter Time : ");
	scanf("%f",&t);
	printf("Enter Principal Amount : ");
	scanf("%f",&p);
	result=si(r,t,p);
	printf("Simple Interest = %f Rs.",result);
}
float si(float r,float t,float p){
	float s=p*r*t/100;
	return s;
}

