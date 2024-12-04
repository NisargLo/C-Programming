//Count number of elements divisible by 3 in array

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
          if(a[i]%3==0){
               c++;
          }
     }
     printf("NO. of elements divisible by 3 in array is %d",c);
}