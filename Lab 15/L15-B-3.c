//Swap first element with last, second to second last and so on

#include<stdio.h>
void main(){
     int n,i,j;
     printf("How many elements are you entering ? ");
     scanf("%d",&n);
     int a[n],temp;
     for(i=0;i<n;i++){
          printf("Enter Element %d : ",i+1);
          scanf("%d",&a[i]);
     }
     for(i=0,j=n-1;i<n/2;i++,j--){
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
     }
     for(i=0;i<n;i++){
          printf("\nElement %d = %d",i+1,a[i]);
     }
}