//Swap first and last digits of a number

#include<stdio.h>
void main() {
     int n,i,j,r1,r2,r3,s=0;
     printf("Enter Number : ");
     scanf("%d",&n);
     r2=n%10;
     printf("Number with First & Last Digit Swaped = ");
     for(i=1;n!=0;i++){
          r1=n%10;
          n=n/10;
          s=(s*10)+r1;
     }
     i--;
     for(j=1;s!=0;j++) {
          r3=s%10;
          s=s/10;
          if(j==1){
               printf("%d",r2);
          }
          else if(j==i){
               printf("%d",r1);
          }
          else{
          switch(r3) {
               case 0 : printf("0");
               break;
               case 1 : printf("1");
               break;
               case 2 : printf("2");
               break;
               case 3 : printf("3");
               break;
               case 4 : printf("4");
               break;
               case 5 : printf("5");
               break;
               case 6 : printf("6");
               break;
               case 7 : printf("7");
               break;
               case 8 : printf("8");
               break;
               case 9 : printf("9");
               break;
          }
          }
     }
}