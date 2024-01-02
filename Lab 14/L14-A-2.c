//Count number of positive or negative number from an array of n numbers

#include<stdio.h>
void main(){
	int n,pos=0,neg=0,zero=0,i;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			pos++;
		}
		else if(a[i]==0){
			zero++;
		}
		else{
			neg++;
		}
	}
	printf("\nCount of Positive NO. = %d",pos);
	printf("\nCount of Negative NO. = %d",neg);
	printf("\nCount of Zero = %d",zero);
}

