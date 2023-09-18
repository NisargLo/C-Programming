#include<stdio.h>
void main() {
     char o;
     printf("Enter Character : ");
     scanf("%c",&o);
     ((o>='a' && o<='z') || (o>='A' && o<='Z'))?
     (printf("Alphabet")):(printf("Not Alphabet"));
}