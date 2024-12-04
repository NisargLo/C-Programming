//Insert new value in the sorted array

#include<stdio.h>
void main() {
     int n,i,j,p,v;
     printf("How many elements do you want to enter ? ");
     scanf("%d",&n);
     int a[n+1],temp;
     for(i=0;i<n;i++){
          printf("Enter element %d : ",i+1);
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
               if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
               }
          }
     }
     printf("\nAt which element do you want to enter your value ? ");
     scanf("%d",&p);
     printf("Enter a value you want to modify : ");
     scanf("%d",&v);
     for(i=n;i>=(p-1);i--){
           a[i+1]=a[i];
     }
     a[p-1]=v;
     for(i=0;i<=n;i++){
          printf("\nElement %d = %d",i+1,a[i]);
     }
}