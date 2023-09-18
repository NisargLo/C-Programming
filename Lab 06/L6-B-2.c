#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,D,root1,root2,realpart,imgpart;
	printf("Enter Coefficients a,b,c : ");
	scanf("%f %f %f",&a,&b,&c);
	D=(b*b)-(4*a*c);
	if(D>0){
		root1=(-b+sqrt(D)/(2*a));
		root2=(-b-sqrt(D)/(2*a));
		printf("root 1 = %.2f, root 2 = %.2f",root1,root2);
	}
	else if(D==0){
		root1=root2=(-b/(2*a));
		printf("root 1 = root 2 = %.2f",root1);
	}
	else{
		realpart=-b/(2*a);
		imgpart=sqrt(-D)/(2*a);
		printf("root 1 = %.2f + i%.2f, root 2 = %.2f - i%.2f",realpart,imgpart,realpart,imgpart);
	}
}

