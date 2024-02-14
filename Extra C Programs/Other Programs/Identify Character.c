// Which is your Character ? (Uppercase, Lowercase, Digit, Special character)

#include<stdio.h>
void main(){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("Character %c is Uppercase",a);
    }
    else if(a>='a' && a<='z'){
        printf("Character %c is Lowercase",a);
    }
    else if(a>='0' && a<='9'){
        printf("Character %c is Digit",a);
    }
    else{
    	printf("Character %c is a Special character",a);
	}
}