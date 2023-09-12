#include<stdio.h>
void main(){
	float u,b;
	printf("Enter Unit Charge : ");
	scanf("%f",&u);
	if(u<=50){
	b=0.5*u;
	}
	else if(u<=150){
	b=(u-50)*0.75+(0.5*50);
	}
	else if(u<=250){
	b=(0.5*50)+(0.75*100)+(u-150)*1.2;
	}
	else{
	b=(0.5*50)+(0.75*100)+(1.2*100)+(u-250)*1.5;
	}
	b=b+(0.2*b);
	printf("Total Electricity Bill is %f",b);
}

