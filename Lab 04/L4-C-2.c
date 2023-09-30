//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]

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