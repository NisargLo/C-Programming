//Check whether given character is vowel or consonant. (Using single if only

#include<stdio.h>
void main (){
     char vowel;
     printf("Enter Character : ");
     scanf("%c",&vowel);
     if(vowel=='a' || vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u'){
          printf("Character is vowel");
     }
     else{
          printf("Character is consonant");
     }
}