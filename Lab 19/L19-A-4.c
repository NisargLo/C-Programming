//Find a character from given string

#include<stdio.h>
void find(char[],char);
void main(){
	char a[100],b;
	printf("Enter String : ");
	gets(a);
	printf("Find Character : ");
	scanf("%c",&b);
	find(a,b);
}
void find(char a[],char b){
	int i;
	for(i=0;a[i]!='\0';i++){
		if(b==a[i]){
			printf("Your Character Index = %d",i);
			return;
		}
	}
	printf("There isn't any Character like this");
}
