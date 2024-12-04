// Get a number as a string from user and convert string to integer, string to float as per user’s choice.
// (Correct Way)

#include <stdio.h>
#include <stdlib.h>

void main() {
     char s[100],c;
     int i;
     float f;
     printf("Enter String which is (Number) : ");
     gets(s);
     printf("Do you want to convert string to integer or float ? ");
     scanf("%c",&c);
     switch(c){
          case 'i' : i = atoi(s);
          printf("\nInteger : %d ",i);
          break;
          case 'f': f = atof(s);
          printf("\nFloat : %f ",f);
          break;
          default: printf("Invalid Number");
     }
}