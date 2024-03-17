/*
     Write following programs in C. 
     
     We are given an array asteroids of integers representing asteroids in a row. 
     For each asteroid, the absolute value represents its size, and the sign represents its direction (positive 
     meaning right, negative meaning left). Each asteroid moves at the same speed. 
     Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If 
     both are the same size, both will explode. Two asteroids moving in the same direction will never meet. 
     
     Input: asteroids = [5,10,-5] 
     Output: [5,10] 
     Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
*/

#include<stdio.h>
#include<math.h>
void main(){
     int n,i;
     printf("How many asteroids are there ? ");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++){
          printf("Enter asteroid %d : ",i+1);
          scanf("%d",&a[i]);
     }
     printf("\nasteroids after all collisions : ");
     for(i=0;i<n;i++){
          if(abs(a[i])>abs(a[i+1]) && abs(a[i-1])<abs(a[i])){
               if((a[i]>0 && a[i+1]<0) || (a[i]<0 && a[i+1]>0)){
                    printf("%d, ",a[i]);
               }
          }
          if(abs(a[i])>abs(a[i+1]) || abs(a[i])<abs(a[i+1])){
               if((a[i]>0 && a[i+1]>0) || (a[i]<0 && a[i+1]<0)){
                    printf("%d, ",a[i]);
               }
          }
     }
     if(abs(a[n-1])>abs(a[n-2])){
          printf("%d",a[n-1]);
     }
}