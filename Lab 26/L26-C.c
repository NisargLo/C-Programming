/*
     Write following programs in C. 
     
     Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside 
     the signed 32-bit integer range [-2^31, 2^31 - 1] or [-2,147,483,648 to 2,147,483,647], then return 0. 
     Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

#include<stdio.h>
#include<limits.h>
// limits.h - header file used to check limits of int [-2^31, 2^31 - 1]
int main(){
     long int n,r,rn=0;
//rn - reverse NO.
     printf("Enter Integer : ");
     scanf("%ld",&n);
     while(n!=0){
          r=n%10;
          rn=(rn*10)+r;
          n/=10;
     }
     if(rn>=INT_MIN && rn<=INT_MAX){
          printf("\nReverse = %ld",rn);
          return rn;
     }
     else{
          return 0;
     }
}

/*
     INT_MIN is defined as (-2147483648)
     INT_MAX is defined as (2147483647)
*/