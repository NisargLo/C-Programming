//Find Max, Min, Sum, Avg. of given numbers from an array

#include<stdio.h>
void main(){
	int n,s=0,i,b,max,min;
	float c;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
		printf("Enter NO. in a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s=s+a[i];
	}
	b=a[0];
	c=(float)s/n;
	for(i=0;i<n;i++){
		if(a[i]>b){
			max=a[i];
		}
		else{
			max=b;
		}
		b=max;
	}
	b=a[0];
	for(i=0;i<n;i++){
		if(a[i]<b){
			min=a[i];
		}
		else{
			min=b;
		}
		b=min;
	}
	printf("\nSum of all NO. = %d",s);
	printf("\nAverage of all NO. = %f",c);
	printf("\nMax NO. = %d",max);
	printf("\nMin NO. = %d",min);
}



