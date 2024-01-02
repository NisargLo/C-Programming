//Read five person height and weight and count the number of person having height greater than 170 and weight less than 50.

#include<stdio.h>
void main(){
	int h[5],w[5],a=0,b=0,i;
	for(i=0;i<5;i++){
		printf("Enter height of person %d : ",i+1);
		scanf("%d",&h[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("Enter weight of person %d : ",i+1);
		scanf("%d",&w[i]);
	}
	for(i=0;i<5;i++){
		if(h[i]>170){
			a++;
		}
	}
	for(i=0;i<5;i++){
		if(w[i]<50){
			b++;
		}
	}
	printf("\nPerson having height greater than 170 is %d",a);
	printf("\nPerson having weight less than 50 is %d",b);
}

