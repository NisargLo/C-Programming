#include<stdio.h>
void main() {
	float s1,s2,s3;
	printf("Enter 3 sides of Triangle : ");
	scanf("%d",&s1);
	scanf("%d",&s2);
	scanf("%d",&s3);
	if(s1==s2 && s2==s3){
		printf("Triangle is Equilateral");
	}
	else if(s1==s2 || s2==s3 || s3==s1){
		printf("Triangle is Isosceles");
	}
	else if((s1*s1)==(s2*s2)+(s3*s3)
			|| (s2*s2)==(s1*s1)+(s3*s3)
			|| (s3*s3)==(s1*s1)+(s3*s3)){
		printf("Triangle is Right-Angled");
	}
	else{printf("Triangle is Scalene");
	}
}

