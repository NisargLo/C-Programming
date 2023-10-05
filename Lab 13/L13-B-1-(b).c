/*   1
     0 1
     0 1 0
     1 0 1 0
     1 0 1 0 1
*/

#include<stdio.h>
void main() {
     int i,j;
     for(i=0;i<=5;i++){
          for(j=1;j<=i;j++){
               if(i==1 || i==4 || i==5){
                    if(j%2!=0){
                          printf("1 ");
                    }
                    else{
                         printf("0 ");
                    }
               }
               else{
                    if(j%2!=0){
                          printf("0 ");
                    }
                    else{
                         printf("1 ");
                    }
               }
          }
          printf("\n");
     }
}