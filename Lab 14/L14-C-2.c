//Find missing numbers of sequence using array.  (in a sequence 1,2,4,5,7,8,10, Missing numbers are 3,6,9)

#include<stdio.h>
void main() {
	int n,i;
	printf("Enter NO. of Terms : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter Term %d : ",i+1);
		scanf("%d",&a[i]);
	}
	a[0]=1;
	printf("Missing Terms are : ");
	for(i=0;i<n-1;i++){
		if(a[i+1]!=a[i]+1){
			printf("%d, ",a[i]+1);
		}
	}
}
