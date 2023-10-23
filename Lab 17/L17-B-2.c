//Swap two arrays using pointers

#include<stdio.h>
void main() {
     int n,i,temp;
     printf("How many NO. are you entering ? ");
     scanf("%d",&n);
     int a[n],*pa[n],b[n],*pb[n];
     for(i=0;i<n;i++){
          printf("Enter Element %d in array 1 : ",i+1);
          scanf("%d",&a[i]);
          pa[i]=&a[i];   
     }
     printf("\n");
     for(i=0;i<n;i++){
          printf("Enter Element %d in array 2 : ",i+1);
          scanf("%d",&b[i]);
          pb[i]=&b[i];
//swap is done below
          temp=*pa[i];
          *pa[i]=*pb[i];
          *pb[i]=temp;
     }
     for(i=0;i<n;i++){
          printf("\nElement %d in array 1 = %d",i+1,*pa[i]);
     }
     printf("\n");
     for(i=0;i<n;i++){
          printf("\nElement %d in array 2 = %d",i+1,*pb[i]);
     }
}