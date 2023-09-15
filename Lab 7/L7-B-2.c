#include<stdio.h>
void main() {
     char o;
     printf("Enter Character : ");
     scanf("%c",&o);
     ((o>='a' && o<='z') || (o>='A' && o<='Z'))?(printf("Character is Alphabet")):(printf("Character is not Alphabet"));
}