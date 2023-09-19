#include<stdio.h>
void main() {
//a-97,z-122,A-65,Z-90
	char o=97,c=65;
	printf("Lower Case Alphabets : ");
	while(o>=97 && o<=122) {
		printf("%c ",o);
		o++;
	}
	printf("\nUpper Case Alphabets : ");
	while(c>=65 && c<=90) {
		printf("%c ",c);
		c++;
	}
}
