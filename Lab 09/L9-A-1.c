#include<stdio.h>
void main(){
	int n=0,i=1,s=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(i<n) {
		if(i%2!=0){
			printf("%d - ",i);
			s=s+i;
		}
		else{
			printf("%d + ",i);
			s=s-i;
		}
		i++;
	}
	printf("%d",n);
	if(n%2!=0){
		s=s+n;
	printf("\nSum of series = %d",s);
	}
	else{
		s=s-n;
	printf("\nSum of series = %d",s);
	}
}

