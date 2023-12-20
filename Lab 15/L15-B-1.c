//Delete all duplicate elements from an array

#include<stdio.h>
void main() {
	int n,i,j,c=0;
//c-count
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
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
	for(i=0;i<n;i++){
		if(b[i]!='n'){
			printf("\nElement %d = %d",i+1,b[i]);
		}
	}
}
