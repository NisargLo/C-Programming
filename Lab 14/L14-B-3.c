//Sort elements of an array in an ascending order

#include<stdio.h>
void main(){
	int n,i,j,temp;
	printf("How many NO. are you entering ? ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter NO. %d : ",i+1);
		scanf("%d",&a[i]);
	}
	 for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
	printf("Your NO. in Ascending Order are :\n");
	for(i=0;i<n-1;i++){
		printf("%d, ",a[i]);
	}
	printf("%d",a[n-1]);
}