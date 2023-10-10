/*   5
     54
     543
     5432
     54321
*/



#include<stdio.h>
void main() {
     int i,j,k,n;
     printf("Enter NO. of lines : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
          k=n;
          for(j=1;j<=i;j++){
               printf("%d",k);
               k--;
          }
          printf("\n");
     }
}