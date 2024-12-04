//Find two largest elements (1st & 2nd largest) in a one dimensional array

#include<stdio.h>
void main() {
     int n,i,m1,m2,d;
     printf("How many elements do you want to enter ? ");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++){
          printf("Enter element %d : ",i+1);
          scanf("%d",&a[i]);
     }
     d=a[0];
     for(i=0;i<n;i++){
          if(a[i]>d){
               m1=a[i];
          }
          else{
               m1=d;
          }
          d=m1;
     }
     printf("\nLargest NO. = %d",m1);
     d=a[0];
     for(i=0;i<n;i++){
               if(a[i]>d && a[i]!=m1){
                    m2=a[i];
               }
               else{
                    m2=d;
               }
               d=m2;
     }
     printf("\nSecond Largest NO. = %d",m2);
}