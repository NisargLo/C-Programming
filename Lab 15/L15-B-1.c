//Delete all duplicate elements from an array

#include<stdio.h>
void main(){
	int n,j,i;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	a[0]=b[0];
	for(i=1;i<n;i++){
		for(j=0;j<=i;j++){
			if(a[i]==b[j] && i!=j){
				
			}
		}
	}
    for(j=0;j<n;j++){
    	printf("\n%d",b[j]);
	}
}
