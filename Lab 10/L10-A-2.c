//Find the sum and average of different numbers which are accepted by user 
//as many as user wants.

#include<stdio.h>
void main(){
	int n=0,c=0,s=0,a=0;
	printf("Enter NO. : ");
	while(n!=-1){
		scanf("%d",&n);
		if(n!=-1){
		s=s+n;
		c++;
		a=(a+n);
		}
	}
	a=a/c;
	printf("Sum = %d  Average = %d",s,a);
}

