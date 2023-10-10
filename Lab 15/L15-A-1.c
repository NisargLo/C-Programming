//Copy all elements of one array to another

#include<stdio.h>
void main() {
     int n;
     printf("How many NO. are you Entering : ");
     scanf("%d",&n);
     int a[n],b[n],i;
     for(i=0;i<n;i++){
          printf("Enter Element %d : ",i+1);
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++){
          b[i]=a[i];
     }
     for(i=0;i<n;i++){
          printf("\nElement %d = %d",i+1,b[i]);
     }
}