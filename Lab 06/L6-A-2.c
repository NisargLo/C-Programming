//Enter basic salary of an employee and calculate Gross salary according to given conditions:
//- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
//- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
//- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic

#include<stdio.h>
void main(){
     int bs;
     float gs;
     printf("Enter Basic Salary : ");
     scanf("%d",&bs);
     if(bs>=10000 && bs<20000){
          gs=bs+(0.2*bs)+(0.8*bs);
          printf("Gross Salary is %f",gs);
     }
     else if(bs>=20000 && bs<30000){
          gs=bs+(2.5*bs)+(0.9*bs);
          printf("Gross Salary is %f",gs);
     }
     else{
          gs=bs+(0.3*bs)+(9.5*bs);
          printf("Gross Salary is %f",gs);
     }
}