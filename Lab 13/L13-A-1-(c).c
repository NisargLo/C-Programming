/*       *
        * *
       * * *
      * * * *
     * * * * *
*/

#include<stdio.h>
void main() {
     int i,j,k,n=6;
     for(i=0;i<=n;i++){
          if(i!=6){
               for(j=1;j<=n-i;j++){
                    printf(" ");
               }
               for(k=1;k<=i;k++){
                    printf("* ");
               }
               printf("\n");
          }
     }
}