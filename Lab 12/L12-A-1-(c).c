/*   5
     54
     543
     5432
     54321
*/



#include<stdio.h>
void main() {
     int i,j,k=5;
     for(i=1;i<=5;i++){
          k=5;
          for(j=1;j<=i;j++){
               printf("%d",k);
               k--;
          }
          printf("\n");
     }
}