//Perform Addition of two matrices

#include<stdio.h>
void main(){
int m,n,i,j;
	printf("Enter NO. of rows : ");
	scanf("%d",&m);
	printf("Enter NO. of columns : ");
	scanf("%d",&n);
	int a[m][n],b[m][n],c[m][n];
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("Enter Element in a[%d][%d] : ",i+1,j+1);
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("Enter Element in b[%d][%d] : ",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}