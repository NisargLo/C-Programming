/*   1
     12
     123
     1234
     12345
*/

#include<stdio.h>
void main() {
     int i,j,k=1;
     for(i=1;i<=5;i++){
          for(j=1;j<=i;j++){
               printf("%4d",k);
               k++;
          }
          printf("\n");
     }
}