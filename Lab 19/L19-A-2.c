//Pass an array in function to print array elements

#include<stdio.h>
void arr();
void main(){
	int n,i;
	printf("Enter No. of Elements of Array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	arr(n,a);
}
void arr(int n,int a[]){
	int i;
	for(i=0;i<n;i++){
		printf("\nElement %d = %d",i+1,a[i]);
	}
}
