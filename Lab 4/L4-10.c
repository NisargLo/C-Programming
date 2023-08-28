#include<stdio.h>
void main () {
     int y,w,d;
     printf("Enter Days : ");
     scanf("%d",&d);
     y=d/365;
     d=d%365;
     w=(d/7);
     d=d%7; 
     printf("Your days in years, weeks, days is %d, %d, %d",y,w,d);
}