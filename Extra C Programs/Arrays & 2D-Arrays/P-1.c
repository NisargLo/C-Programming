//Matrix of 3x3

#include<stdio.h>
void main() {
     int m,n;
     printf("Enter NO. of rows & column of Matrix : ");
     scanf("%d %d",&m,&n);
     int a[m][n],i,j;
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("Enter Elements in a[%d][%d] : ",i,j);
               scanf("%d",&a[i][j]);
          }
     }
     printf("\n");
          for(i=0;i<m;i++){
               for(j=0;j<n;j++){
                    printf("a[%d][%d] = %d\t",i+1,j+1,a[i][j]);
               }
               printf("\n");
          }
}