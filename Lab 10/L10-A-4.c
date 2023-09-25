//Print digits of given number

#include<stdio.h>
void main(){
	int n,s=0,r,a;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(n!=0) {
		r=n%10;
		n=n/10;
		s=(s*10)+r;
	}
	while(s!=0) {
		a=s%10;
	switch(a){
		case 0: printf("0,");
		break;
		case 1: printf("1, ");
		break;
		case 2: printf("2, ");
		break;
		case 3: printf("3, ");
		break;
		case 4: printf("4, ");
		break;
		case 5: printf("5, ");
		break;
		case 6: printf("6, ");
		break;
		case 7: printf("7, ");
		break;
		case 8: printf("8, ");
		break;
		case 9: printf("9, ");
		break;
	}
	s=s/10;
	}
	printf("are digits");
}

