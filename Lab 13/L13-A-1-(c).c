/*     *
      **
      ***
     ****
     *****
*/

#include<stdio.h>
void main() {
     int i,j,n=5;
     for(i=5;i>0;i--){
          for(j=1;j<=i;j++){
               if(j<i){
                    printf(" ");
               }
               else{
                    printf("*");
               }
          }
          printf("\n");
     }
}