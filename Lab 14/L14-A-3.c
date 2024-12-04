//Count number of even or odd number from an array of n numbers.

#include<stdio.h>
void main(){
	int n,odd=0,even=0,i;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("\nCount of Odd NO. = %d",odd);
	printf("\nCount of Even NO. = %d",even);
}

