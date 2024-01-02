//Print the upper triangular matrix

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
               if(i<=j){
               printf("Enter element in a[%d][%d] : ",i+1,j+1);
               scanf("%d",&a[i][j]);
               }
          }
     }
     printf("\n");
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               if(i>j){
                    printf("0\t");
               }
               else if(i<=j){
               printf("%d\t",a[i][j]);
               }
          }
          printf("\n");
     }
}