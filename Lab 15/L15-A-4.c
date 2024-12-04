//Search element in array

#include<stdio.h>
void main(){	
	int n,s,i;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nSearch Element : ");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(s==a[i]){
			printf("Element is in a[%d]",i);
			break;
		}
	}
}

