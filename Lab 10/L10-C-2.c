//Find HCF and LCM of two numbers

#include<stdio.h>
void main() {
	int i=2,n1,n2,temp1,temp2,j=2;
	printf("Enter 2 NO. : ");
	scanf("%d %d",&n1,&n2);
	while(i<=n1) {
		if(n1%i==0) {
			temp1=i;
		}
		i++;
	}
	while(j<=n2) {
		if(n2%j==0) {
			temp2=j;
		}
		j++;
	}
	while((temp1>0 && temp2<=0) || (temp2>0 && temp1<=0)){
	if(temp1>temp2){
		temp1=temp1-temp2;
	}
	else{
		temp2=temp2-temp1;
	}
	}
	if(temp1>temp2){
		printf("HCF = %d",temp1);
	}
	else{
		printf("HCF = %d",temp2);
	}
}