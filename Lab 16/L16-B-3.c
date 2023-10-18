// Read a matrix and print diagonal elements and its sum

#include<stdio.h>
void main() {
     int m,n,i,j,s=0;
     printf("Enter NO. of rows : ");
     scanf("%d",&m);
     printf("Enter NO. of columns : ");
     scanf("%d",&n);
     int a[m][n];
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("Enter element in a[%d][%d] : ",i+1,j+1);
               scanf("%d",&a[i][j]);
          }
     }
     printf("\nSum of principal diagonal elements of your matrix is : ");
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               if(i==j && i<n-1){
                    printf("%d + ",a[i][j]);
                    s=s+a[i][j];
               }
          }
     }
     printf("%d = %d",a[m-1][n-1],s);
}