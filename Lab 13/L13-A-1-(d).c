/*           1
           2   2
         3   3   3
       4   4   4   4
     5   5   5   5   5
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
               printf("%d ",i-1);
          }
          printf("\n");
          }
     }
}