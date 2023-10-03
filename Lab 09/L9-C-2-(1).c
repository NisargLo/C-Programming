//Convert decimal number to binary. (i.e. n=11  output: 1011)

#include<stdio.h>
void main(){
  int n,r,m=1,bin=0;
  printf("Enter Number : ");
  scanf("%d",&n);
  while(n!=0){
    r=n%2;
    bin=bin+(r*m);
    m=m*10;
    n=n/2;
  }
  printf("\nBinary Value : %d",bin); 
}
            
