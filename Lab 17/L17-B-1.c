//Copy one array to another using pointers

#include<stdio.h>
void main() {
     int n,i;
     printf("How many NO. are you entering ? ");
     scanf("%d",&n);
     int a[n],*pa[n],b[n],*pb[n];
     for(i=0;i<n;i++){
          printf("Enter Element %d : ",i+1);
          scanf("%d",&a[i]);
          pa[i]=&a[i];
          pb[i]=&b[i];
     }
     for(i=0;i<n;i++){
          *pb[i]=*pa[i];
          printf("\nElement %d in Other Array = %d",i+1,*pb[i]);
     }
}