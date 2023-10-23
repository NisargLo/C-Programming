//Sort array using pointers

#include<stdio.h>
void main(){
     int n,temp,i,j;
     printf("How many NO. are you entering ? : ");
     scanf("%d",&n);
     int a[n],*pa[n];
     for(i=0;i<n;i++){
               printf("Enter Element %d : ",i+1);
               scanf("%d",&a[i]);
               pa[i]=&a[i];
     }
     printf("\n");
     for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
               if(a[i]>a[j]){
                    temp=*pa[i];
                    *pa[i]=*pa[j];
                    *pa[j]=temp;
               }
          }
     }
     for(i=0;i<n;i++){
          printf("\nElement %d = %d",i+1,*pa[i]);
     }
}