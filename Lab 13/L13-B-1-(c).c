/*   * * * * *
      * * * *
       * * *
        * *
         *
*/

#include<stdio.h>
void main() {
     int i,j,k,n=5;
//n - number of lines
     for(i=1;i<=n;i++){
          for(j=1;j<=i;j++){
               printf(" ");
          }
          for(k=n;k>=i;k--){
               printf("* ");
          }
          printf("\n");
     }
}