#include<stdio.h>
int count(int a);
void main(){
     int a,result;
     printf("Enter NO. : ");
     scanf("%d",&a);
     result=count(a);
     printf("Count = %d",result);
}
int count(int a){
     if(a==0){
          return 0;
     }
     else{
          return 1+count(a/10);
     }
}