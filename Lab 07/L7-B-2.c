//Check whether character is an alphabet or not using conditional operator.

#include<stdio.h>
void main() {
     char o;
     printf("Enter Character : ");
     scanf("%c",&o);
     ((o>='a' && o<='z') || (o>='A' && o<='Z'))?
     (printf("Alphabet")):(printf("Not Alphabet"));
}