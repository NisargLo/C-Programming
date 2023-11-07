//Find power of any number using recursion

#include<stdio.h>
int power(int,int);
void main(){
	int x,y,result;
	printf("Enter Base : ");
	scanf("%d",&x);
	printf("Enter Exponent : ");
	scanf("%d",&y);
	result=power(x,y);
	printf("Ans. = %d",result);
}
int power(int x,int y){
	int m=x,i=1;
	if(y-i>=1){
		m=m*x;
		y--;
	}
	else{
		return m;
	}
}
