/*   1
     12
     123
     1234
     12345
*/

#include<stdio.h>
void main() {
     int i,j,k=1,n;
     printf("Enter NO. of lines : ");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
          for(j=1;j<=i;j++){
               printf("%2d",j);
          }
          printf("\n");
     }
}