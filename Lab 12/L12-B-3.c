//Print Pascal triangle.

#include<stdio.h>
void main() {
	int l,c,n;
	printf("Enter NO. : ");
	scanf("%d",&n);
	for(l=0;l<n;l++){
		for(c=1;c<=l+1;c++){
			if(c==1 || c==l+1){
				printf("1");
			}
			else{
				printf("%d",l);
			}
		}
		printf("\n");
	}
}
