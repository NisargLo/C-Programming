/*   *****
     ****
     ***
     **
     *
*/

#include<stdio.h>
void main() {
     int i,j,n;
     printf("Enter NO. of lines : ");
     scanf("%d",&n);
     for(i=n;i>0;i--){
          for(j=0;j<i;j++){
               printf("*");
          }
          printf("\n");
     }
}