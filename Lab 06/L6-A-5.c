#include<stdio.h>
void main() {
	int a,b,c,d,e;
	float f;
	printf("Enter Marks of your 5 Subjects : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("%f",f);
	if(f<35)
	{
	printf("\nFail");
	}
	else if(f>=35 && f<=45)
	{
	printf("\nPass Class");
	}
	else if(f>=46 && f<=60)
	{
	printf("\nSecond Class");
	}
	else if(f>=61 && f<=70)
	{
	printf("\nFirst Class");
	}
	else{printf("\nDistinction");
	}
}
