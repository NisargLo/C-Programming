/*
          1 
         2 A 3
        4 B 5 C 6
       7 D 8 E 9 F 10
     11 G 12 H 13 I 14 J 15
*/

#include<stdio.h>
void main() {
     int i,j,a=65,b=1;
     for(i=1;i<=5;i++){
          for(j=1;j<=5-i;j++){
               printf(" ");
          }
          for(j=1;j<=2*i-1;j++){
               if(j%2==0){
                    printf("%c ",a);
                    a++;
               }
               else{
                    printf("%d ",b);
                    b++;
               }
          }
     printf("\n");
     }
}