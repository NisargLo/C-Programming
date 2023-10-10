//Count total number of negative elements in array

#include<stdio.h>
void main() {
     int n,c=0;
     printf("How many NO. are you Entering : ");
     scanf("%d",&n);
     int a[n],i;
     for(i=0;i<n;i++){
          printf("Enter Element %d : ",i+1);
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++){
          if(a[i]<0){
               c++;
          }
     }
     printf("Total NO. of Negative elements in array is %d",c);
}