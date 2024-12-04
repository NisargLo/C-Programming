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
	if(y==1){
		return x;
	}
	else{
		return x*power(x,y-1);
	}
}
