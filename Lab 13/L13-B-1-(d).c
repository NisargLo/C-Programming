/*       1
        A B
       1 2 3
      C D E F
     1 2 3 4 5
*/

#include<stdio.h>
void main() {
     int i,j,k,n=5,o=65;
//n - number of lines
     for(i=0;i<=n;i++){
          if(i<=n){
               for(j=1;j<=n-i;j++){
                    printf(" ");
               }
               for(k=1;k<=i;k++){
                    if(i%2==0){
                    printf("%c ",o);
                    o++;
                    }
                    else{
                         printf("%d ",k);
                    }
               }
               printf("\n");
          }
     }
}