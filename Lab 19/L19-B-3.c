//Swap elements of two integer arrays using user define function

#include<stdio.h>
void swap(int a[], int b[],int n){
     int t,i;
     for(i=0;i<n;i++){
          t=a[i];
          a[i]=b[i];
          b[i]=t;
     }
     for(i=0;i<n;i++){
          printf("\nModified Element %d of Array 1 = %d",i+1,a[i]);
     }
     printf("\n");
     for(i=0;i<n;i++){
          printf("\nModified Element %d of Array 2 = %d",i+1,b[i]);
     }
}
void main(){
     int n,i;
     printf("Enter NO. of elements : ");
     scanf("%d",&n);
     int a[n],b[n];
     for(i=0;i<n;i++){
          printf("Enter Element %d of Array 1 : ",i+1);
          scanf("%d",&a[i]);
     }
     printf("\n");
     for(i=0;i<n;i++){
          printf("Enter Element %d of Array 2 : ",i+1);
          scanf("%d",&b[i]);
     }
     swap(a,b,n);
}