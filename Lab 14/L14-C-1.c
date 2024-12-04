//Count total duplicate elements in an array

#include<stdio.h>
void main() {
	int n,c=0,i,j;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		j=i+1;
		if(a[i]==a[j] && i!=j){
			c++;
		}
		j++;
	}
	printf("\nCount of duplicate elements in an array = %d",c);
}
