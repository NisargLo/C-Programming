/*
     Write following programs in C. 
     
     Given an array of integers nums and an integer target, return indices of the two numbers such that they add 
     up to target. You may assume that each input would have exactly one solution, and you may not use the 
     same element twice. You can return the answer in any order
*/

#include<stdio.h>
void main(){
     int n,t,i,j,c=0;
     printf("How many elements are you entering : ");
     scanf("%d",&n);
     int a[n],b[n];
     for(i=0;i<n;i++){
          printf("Enter integer %d : ",i+1);
          scanf("%d",&a[i]);
     }
     printf("\nEnter target : ");
     scanf("%d",&t);
     for(i=0;i<n;i++){
		b[i]='n';
	}
	for(i=0;i<n;i++){
		for(j=0;j<c;j++){
			if(a[i]==b[j]){	
				break;
			}
		}
		if(j==c){
			b[c]=a[i];
			c++;
		}
	}
     printf("\nPairs whose sum = target - ");
     for(i=0;i<n && b[i]!='n';i++){
          for(j=i+1;j<n && b[i]!='n';j++){
               if(b[i]+b[j]==t){
                    printf("(%d,%d), ",b[i],b[j]);
               }
          }
     }
}