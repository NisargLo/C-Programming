//Calculate the sum of n numbers entered by the user using calloc()

#include<stdio.h>
#include<stdlib.h>
void main(){
     int n,i,*p,s=0;
     printf("Enter how many NO. do you want to sum : ");
     scanf("%d",&n);
     p=(int *)calloc(n,sizeof(int));
     printf("\n"); 
     for(i=0;i<n;i++){
          printf("Enter NO. %d : ",i+1);
          scanf("%d",&p[i]);
          s=s+p[i];
     }
     printf("\nSum of given %d NO. = %d",n,s);
     free(p);
}