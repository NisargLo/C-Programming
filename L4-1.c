#include<stdio.h>
void main (){
     float p,r,n,i;
     printf("Enter Principle, Rate & Time:");
     scanf("%f",&p);
     scanf("%f",&r);
     scanf("%f",&n);
i=(p*r*n)/100;
printf("Simple Interest is %f",i);
}