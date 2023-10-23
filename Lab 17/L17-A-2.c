//Demonstrate int, float, double and char pointer

#include<stdio.h>
void main(){
	int i;
	int *pi;
	float f;
	float *pf;
	double lf;
	double *plf;
	char c;
	char *pc;
	pi=&i;
	pf=&f;
	plf=&lf;
	pc=&c;
	printf("Enter Integer Value : ");
	scanf("%d",&i);
	printf("Enter Float Value : ");
	scanf("%f",&f);
	printf("Enter Double Value : ");
	scanf("%lf",&lf);
	printf("Enter Character Value : ");
	scanf(" %c",&c);
	printf("\nAddress of d = %d",pi);
	printf("\nAddress of f = %d",pf);
	printf("\nAddress of lf = %d",plf);
	printf("\nAddress of c = %d",pc);
	printf("\nValue of d = %d",*pi);
	printf("\nValue of f = %f",*pf);
	printf("\nValue of lf = %lf",*plf);
	printf("\nValue of c = %c",*pc);
}
