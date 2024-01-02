//Input a string in character array and print string and length of string

#include<stdio.h>
void main(){
	int i;
	char a[100];
	printf("Enter a Word : ");
	gets(a);
	printf("\nYour String is ");
	puts(a);
	for(i=0;a[i]!='\0';i++){
	}
	printf("\nLength of word is %d",i);
}

