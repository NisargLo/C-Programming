//Write a program to print all Armstrong numbers in a given range. For example 153 = 1^3 + 5^3 + 3^3. So, 153 is Armstrong number

#include<stdio.h>
void main() {
	int n,r,c=0,p,a,b=0,d,ran;
     printf("Enter Range of Digits : ");
     scanf("%d",&ran);
	printf("Enter NO. : ");
	scanf("%d",&n);
	d=n;
	while(n!=0) {
		n=n/10;
		c++;
	}
     if(c<=ran){
	n=d;
	while(n!=0) {
		r=n%10;
		p=1;
		a=1;
	while(a<=c) {
	p=(p*r);
	a++;
	}
	b=b+p;
	n=n/10;
	}
	if(b==d){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
}
     else{
          printf("Your NO. is out of Range");
     }
}
