//Count number of positive, negative and zero elements from 3 X 3 matrix

#include<stdio.h>
void main() {
	int m,n,i,j,pos=0,neg=0,zero=0;
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
			if(a[i][j]<0){
				neg++; 
			}
			else if(a[i][j]>0){
				pos++;
			}
			else{
				zero++;
			}
		}
	}
	printf("Count of Positive NO. = %d",pos);
	printf("\nCount of Negative NO. = %d",neg);
	printf("\nCount of Zero = %d",zero);
}
