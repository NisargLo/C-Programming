/*   
           1
         2   2
       3   3   3
     4   4   4   4
*/

#include<stdio.h>
void main(){
     int i,j,n=5,a;
     for(i=1;i<=5;i++){
          a=i;
          for(j=1;n-a>0 && j<a;j++){
               printf(" ");
          }
          for(j=0;j<i;j++){
               printf("%d ",i);
          }
          printf("\n");
     }
}