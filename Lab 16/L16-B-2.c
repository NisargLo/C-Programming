//Perform Multiplication of two matrices

#include<stdio.h>
void main() {
     int i,j,m,n,o,p,k;
     printf("Enter NO. of rows of 1st Matrix : ");
     scanf("%d",&m);
     printf("Enter NO. of columns of 1st Matrix : ");
     scanf("%d",&n);
     int a[m][n]; 
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("Enter element in a[%d][%d] : ",i+1,j+1);
               scanf("%d",&a[i][j]);
          }
     }
     printf("\n");
     printf("Enter NO. of rows of 2nd Matrix : ");
     scanf("%d",&o);
     printf("Enter NO. of columns of 2nd Matrix : ");
     scanf("%d",&p);
if(n!=p){
     printf("\nMatrix with entered ordered can't be multiplied.");
}
else{
     int b[o][p],c[m][p];
	for(i=0;i<o;i++){
		for(j=0;j<p;j++){
			printf("Enter Element in b[%d][%d] : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\nMultiplication of 2 Matrices = \n");
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
     }
}