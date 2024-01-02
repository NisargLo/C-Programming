//Check a given matrix is a sparse matrix or not

#include<stdio.h>
void main() {
     int m,n,i,j,nz=0,z=0;
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
     printf("\n");
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("%d\t",a[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               if(a[i][j]!=0){
                    nz++;
               }
               else if(a[i][j]==0){
                    z++;
               }
          }
     }
     if(nz==m || nz==n){
          printf("\nMatrix is Sparse matrix.");
     }
     else if(z>(m*n)/2){
          printf("\nMatrix is Sparse matrix.");
     }
     else{
          printf("\nMatrix is not Sparse matrix.");
     }
}