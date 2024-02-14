//Check whether elements of array is in ascending or not

#include<stdio.h>
void main() {
     int n,i,state;
     printf("Enter Size of Array : ");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++){
          printf("Enter Element in a[%d] : ",i);
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++){
          if(a[i]>a[i+1]){
               state=1;
               break;
          }
     }
     if(state==1){
          printf("No, not Ascending");
     }
     else{
          printf("Yes, Ascending");
     }
}