//Prime No.

#include<stdio.h>
void main(){
    int n,i=1;
    printf("Enter NO. : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            printf("\nNot Prime");
            return;
        }
    }
    printf("\nPrime");
}