/*       1
        1 2
       1 2 3
      1 2 3 4
     1 2 3 4 5
*/

#include<stdio.h>
void main() {
     int i,j,k,n;
     printf("Enter NO. of lines : ");
     scanf("%d",&n);
     for(i=0;i<=n;i++){
          if(i<=n){
          for(j=1;j<=n-i;j++){
               printf(" ");
          }
          for(k=1;k<=i;k++){
               printf("%d ",k);
          }
          printf("\n");
          }
     }
}