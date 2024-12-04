/*    1
      2  3
      4  5  6
      7  8  9 10
     11 12 13 14 15
*/

#include<stdio.h>
void main() {
     int i,j,k=1,n;
     printf("Enter NO. of lines : ");
     scanf("%d",&n);
     for(i=0;i<=n;i++){
          for(j=1;j<=i;j++){
               printf("%3d ",k);
               k++;
          }
          printf("\n");
     }
}