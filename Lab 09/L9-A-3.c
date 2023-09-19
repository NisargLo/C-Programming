#include<stdio.h>
void main() {
	int x=0,y=0,i=1,a=1;
	printf("Enter Base & Exponent : ");
	scanf("%d %d",&x,&y);
	while(i<=y){
		a=a*x;
		i++;
	}
	printf("%d raise to %d = %d",x,y,a);
}
