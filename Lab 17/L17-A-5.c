//Store n elements in an array and print the elements using pointer

#include<stdio.h>
void main(){
	int n,i;
	printf("How many elements do you want to enter ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	int *pa[n];
	for(i=0;i<n;i++){
		pa[i]=&a[i];
	}
	for(i=0;i<n;i++){
		printf("\nElement %d = %d",i+1,*pa[i]);
	}
}