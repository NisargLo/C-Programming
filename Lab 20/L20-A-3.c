//Demonstrate difference between structure and union

#include<stdio.h>
struct student_1{
     char name[100];
     int roll_no;
     float spi;
     double cpi;
}s1;
union student_2{
     char name[100];
     int roll_no;
     float spi;
     double cpi;
}s2;
void main(){
     printf("%d",sizeof(s2.cpi));
     printf("\nDifference between Structure and Union :- ");
     printf("\nSize of Structure - %d bytes",sizeof(s1));
     printf("\nSize of Union - %d bytes",sizeof(s2));
}