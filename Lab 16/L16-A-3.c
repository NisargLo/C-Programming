//Read and store the roll no and marks of 20 students using 2D array

#include<stdio.h>
void main() {
	int m,n,i,j,k=1;
	int a[5][4];
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
		printf("Enter Marks of Roll NO. %d : ",k);
		scanf("%d",&a[i][j]);
		k++;
		}
	}
	k=1;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
		printf("\nMarks of Roll NO. %d = %d",k,a[i][j]);
		k++;
		}
	}
	
	
	
	
	
}
