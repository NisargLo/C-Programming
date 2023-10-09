//Calculate the average, geometric and harmonic mean of n elements in an array

#include<stdio.h>
#include<math.h>
void main(){
	int n,i;
	float b,g,h,s2=0,c,m=1,s1=0;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s1=s1+a[i];
	}
	c=s1/(float)n;
	for(i=0;i<n;i++){
		m=m*a[i];
	}
	g=(pow(m,1.0/n));
	for(i=0;i<n;i++){
		s2=s2+(1.0/a[i]);
	}
	h=(n/s2);
	printf("\nAverage = %3.3f",c);
	printf("\nGeometric Mean = %3.3f",g);
	printf("\nHarmonic Mean = %3.3f",h);
}

