//Replace a character in given string

#include<stdio.h>
void replace(char[],char,char);
void main(){
	char a[100],b,c;
	printf("Enter String : ");
	gets(a);
	printf("Find Character : ");
	scanf("%c",&b);
	printf("Replace Character : ");
	scanf(" %c",&c);
	replace(a,b,c);
	printf("\nNew Character = ");
	puts(a);
}
void replace(char a[],char b,char c){
	int i;
	for(i=0;a[i]!='\0';i++){
		if(b==a[i]){
			a[i]=c;
			return;
		}
	}
	printf("There isn't any Character like this");
}
