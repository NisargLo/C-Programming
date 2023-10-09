//Sort elements of an array in an ascending order

#include<stdio.h>
void main(){
	int n,i,j,min,c;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++) {
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		c=a[0];
	for(i=0;i<n;i++){
		if(a[i]<c){
			min=a[i];
		}
		else{
			min=c;
		}
		c=min;
	}
	b[j]=min;
	}

	printf("Your NO. in Ascending Order are :\n");
	for(i=0;i<n-1;i++){
		printf("%d, ",b[i]);
	}
	printf("%d",b[n-1]);
}

