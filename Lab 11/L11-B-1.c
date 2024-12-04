//Print the Fibonacci Series

#include<stdio.h>
void main() {
     int n,i,nt=0,t1=0,t2=1;
     printf("Enter Number of Terms in Fibonacci Series : ");
     scanf("%d",&n);
     printf("Fibonacci Series : ");
     for(i=1;i<n;i++){
        printf("%d, ",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
     }
     printf("%d",nt);
}