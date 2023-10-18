//Perform Multiplication of two matrices

#include<stdio.h>
void main() {
     int m,n,o,p,i,j,s=0;
     printf("Enter NO. of rows of 1st Matrix : ");
     scanf("%d",&m);
     printf("Enter NO. of columns of 2nd Matrix : ");
     scanf("%d",&n);
     int a[m][n]; 
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               printf("Enter element in a[%d][%d] : ",i+1,j+1);
               scanf("%d",&a[i][j]);
          }
     }
     printf("Enter NO. of rows of 1st Matrix : ");
     scanf("%d",&o);
     printf("Enter NO. of columns of 2nd Matrix : ");
     scanf("%d",&p);
if(n!=p){
     printf("Matrix with entered ordered can't be multiplied.");
}
else{
     int b[o][p];
     for(i=0;i<o;i++){
          for(j=0;j<p;j++){
               printf("Enter element in b[%d][%d] : ",i+1,j+1);
               scanf("%d",&b[i][j]);
          }
     }
     for(i=0;i<m;i++){
          for(j=0;j<n;j++){
               for(k=0;k<n;k++){
                    s=s+
               }
          }
     }
}
}