//Read n numbers from user and print in normal and reverse order

#include<stdio.h>
void main() {
     int n,i;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
     printf("\nNO. in Normal Order : ");
     for(i=0;i<n;i++){
          printf("%d ",a[i]);
     }
     printf("\nNO. in Reverse Order : ");
     for(i=n-1;i>=0;i--){
          printf("%d ",a[i]);
     }
}