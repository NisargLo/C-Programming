//Read values in two-dimensional array and print them in matrix form

#include<stdio.h>
void main() {
	int m,n,i,j;
	printf("Enter NO. of rows : ");
	scanf("%d",&m);
	printf("Enter NO. of columns : ");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("Enter Element in a[%d][%d] : ",i+1,j+1);
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
