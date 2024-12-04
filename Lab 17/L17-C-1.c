//Find length of string using pointers

#include<stdio.h>
void main(){
	int i,*pi;
	pi=&i;
	char a[100];
	printf("Enter Word (String) : ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
	}
	printf("Lenght of String = %d",*pi);
}

