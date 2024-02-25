// Palindrome Number (Eg : 121, 123454321 etc...)

#include<stdio.h>
void main() {
     int n=0,i,r,s=0;
     printf("Enter Number : ");
     scanf("%d",&n);
     i=n;
     while(n!=0) {
          r=n%10;
          s=(s*10)+r;
          n=n/10;
     }
     if(i==s){
          printf("Palindrome Number");
     }
     else{
          printf("Not Palindrome Number");
     }
}