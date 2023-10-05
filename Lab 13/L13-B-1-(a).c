/*    1
      2  3
      4  5  6
      7  8  9 10
     11 12 13 14 15
*/

#include<stdio.h>
void main() {
     int i,j,k=1;
     for(i=0;i<=5;i++){
          for(j=1;j<=i;j++){
               printf("%2d ",k);
               k++;
          }
          printf("\n");
     }
}