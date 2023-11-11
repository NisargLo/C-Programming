//Find reverse of any number using recursion

#include<stdio.h>
int r(int n){
     int i,r;
     printf("Reverse of %d = ",n);
     for(i=0;n!=0;i++){
          r=n%10;
          n=n/10;
          printf("%d",r);
     }
}
void main(){
     int n;
     printf("Enter NO. : ");
     scanf("%d",&n);
     r(n);
}
