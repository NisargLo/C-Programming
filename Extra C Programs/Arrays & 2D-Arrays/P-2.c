//Count of positive, negative & zero in array

#include<stdio.h>
void main() {
      int m,n,pos=0,neg=0,zero=0;
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
               if(a[i][j]>0){
                    pos++;
               }
               else if(a[i][j]<0){
                    neg++;
               }
               else{
                    zero++;
               }
          }
     }
     printf("\nNo. which are Positive in Array = %d",pos);
     printf("\nNo. which are Negative in Array = %d",neg);
     printf("\nNo. which are Zero in Array = %d",zero);
}