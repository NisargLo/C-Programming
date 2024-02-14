#include<stdio.h>
int fibbo(int a){
     if(a==0 || a==1){
          return a;
     }
     else{
          return (fibbo(a-1)+fibbo(a-2));
     }
}
void main(){
     int n,a=0,i;
     printf("Enter NO. of terms of fibbonaci series : ");
     scanf("%d",&n);
     printf("\nFibbonaci Series : "); 
     for(i=0;i<=n-1;i++,a++){
          printf("%d, ",fibbo(a));
     }
     printf("%d",(fibbo(a-1)+fibbo(a-2)));
}