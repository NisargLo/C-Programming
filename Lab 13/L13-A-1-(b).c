/*   12345
     1234
     123
     12
     1
*/

#include<stdio.h>
void main() {
     int i,j,n;
     printf("Enter NO. of lines : ");
     scanf("%d",&n);
     for(i=n;i>0;i--){
          for(j=1;j<=i;j++){
               printf("%d",j);
          }
          printf("\n");
     }
}