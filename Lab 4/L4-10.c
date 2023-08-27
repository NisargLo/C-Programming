#include<stdio.h>
void main () {
     int y,m,d;
     printf("Enter Days : ");
     scanf("%d",&d);
     y=d/365;
     m=(d%365)/7;
     d=(d%365)%7;
     printf("Your days in YY:MM:DD is %d:%d:%d",y,m,d);
}