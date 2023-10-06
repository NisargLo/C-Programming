/*       *
        * *
       * * *
      * * * *
     * * * * *
*/

#include<stdio.h>
void main() {
     int i,j,k;
     for(i=0;i<=6;i++){
          if(i!=0){
          for(j=5;j>=i;j--){
               printf(" ");
          }
          for(k=1;k<=j;k++){
               printf("* ");
          }
          printf("\n");
          }
     }
}