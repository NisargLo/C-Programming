//Add two matrix using pointers

#include<stdio.h>
void main(){
     int m,n,i,j;
     printf("Enter NO. of rows of matrix : ");
     scanf("%d",&m);
     printf("Enter NO. of columns of matrix : ");
     scanf("%d",&n);
     int a[m][n],b[m][n],c[m][n],*pa[m][n],*pb[m][n],*pc[m][n];
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("Enter Element in a[%d][%d] : ",i+1,j+1);
               scanf("%d",&a[i][j]);
               pa[i][j]=&a[i][j];
               pc[i][j]=&c[i][j];
          }
     }
     printf("\n");
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("Enter Element in b[%d][%d] : ",i+1,j+1);
               scanf("%d",&b[i][j]);
               pb[i][j]=&b[i][j];
               *pc[i][j]=*pa[i][j]+*pb[i][j];
          }
     }
     printf("\n");
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("%d\t",*pc[i][j]);
          }
          printf("\n");
     }
}