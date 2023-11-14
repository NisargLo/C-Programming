//Demonstrate difference between structure and union

#include<stdio.h>
struct student_1{
     char name[10];
     int roll_no;
     float spi;
     double cpi;
}s1;
union student_2{
     char name[10];
     int roll_no;
     float spi;
     double cpi;
}s2;
void main(){
     printf("\nDifference between Structure and Union :- ");
     printf("\nSize of Structure - %d",sizeof(s1));
     printf("\nSize of Union - %d",sizeof(s2));
}