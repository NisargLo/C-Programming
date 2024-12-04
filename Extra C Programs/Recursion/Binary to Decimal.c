//Binary to Decimal

#include<stdio.h>
int b_d(int n,int count,int total){
     if(n>=1){
          total=total+(n%10)*count;
          b_d(n/10,count*2,total);
     }
     else{
          return total;
     }
}
void main(){
     int n,d,total=0,count=1;
     printf("Enter Binary NO. : ");
     scanf("%d",&n);
     d=b_d(n,count,total);
     printf("Decimal = %d",d);
}