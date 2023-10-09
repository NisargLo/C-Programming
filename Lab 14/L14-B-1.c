//Count numbers higher than the average of an array.

#include<stdio.h>
void main(){
	int n,i,s=0,b=0;
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
	c=(float)s/n;
	for(i=0;i<n;i++){
		if(a[i]>c){
			b++;
		}
	}
	printf("\nCount of NO. greater than the average = %d",b);
}

