#include<stdio.h>
void main(){
     char c;
     printf("Enter Character : ");
     scanf("%c",&c);
     if(c=='1' || c=='2' || c=='3' || c=='4' || c=='5' 
     || c=='6' || c=='7' || c=='8' || c=='9' || c=='0'){
          printf("You entered a Digit.");}
     else if(c=='a' || c=='b' || c=='c' || c=='d' || c=='e' || c=='f' || c=='g' 
          || c=='h' || c=='i' || c=='j' || c=='k' || c=='l' || c=='m' || c=='n' 
          || c=='o' || c=='p' || c=='q' || c=='r' || c=='s' || c=='t' || c=='u'
          || c=='v' || c=='w' || c=='x' || c=='y' || c=='z'){
               printf("You entered a Lower Case Character.");}
     else if(c=='A' || c=='B' || c=='C' || c=='D' || c=='E' || c=='F' || c=='G' 
          || c=='H' || c=='I' || c=='J' || c=='K' || c=='L' || c=='M' || c=='N' 
          || c=='O' || c=='P' || c=='Q' || c=='R' || c=='S' || c=='T' || c=='U'
          || c=='V' || c=='W' || c=='X' || c=='Y' || c=='Z'){
               printf("You entered a Upper Case Character.");}
     else if(c=='!' || c=='@' || c=='#' || c=='$' || c=='%' || c=='^' || c=='&' 
          || c=='~' || c=='`' || c=='_' || c=='-' || c==')' || c=='(' || c=='*' 
          || c=='+' || c=='=' || c=='{' || c=='}' || c=='[' || c==']' || c=='|'
          || c=='<' || c=='>' || c==';' || c==':' || c=='\ '|| c=='/' || c=='?' 
          || c==',' || c=='.'){
               printf("You entered a Special Character.");}
          }
