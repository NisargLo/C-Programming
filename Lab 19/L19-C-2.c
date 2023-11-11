//C Program find nCr (Combination) and nPr (Permutation). (Formula: nCr = n!/(r!*(n-r)!), nPr = n!/(n-r)!)

#include<stdio.h>
void pc(int n,int r){
     int i,m1=1,m2=1,m3=1,j,k;
     for(i=n;i>=1;i--){
          m1=m1*i;
     }
     for(j=r;j>=1;j--){
          m2=m2*j;
     }
     for(k=n-r;k>=1;k--){
          m3=m3*k;
     }
     printf("\nPermutation = %d",m1/m3);
     printf("\nCombination = %d",m1/(m2*m3));
}
void main() {
     int n,r;
     printf("Enter value of N : ");
     scanf("%d",&n);
     printf("Enter value of R : ");
     scanf("%d",&r);
     pc(n,r);
}
