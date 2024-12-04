//Demonstrate nested structure

#include<stdio.h>
struct address{
     char house[100];
     char city[100];
     char state[100];
};
struct student{
     char name[100];
     int roll_no;
     float cpi;
     struct address a;
}s;

void main(){
     printf("Enter Name of student : ");
     scanf(" %s",s.name);
     printf("Enter Roll NO. of student : ");
     scanf(" %d",&s.roll_no);
     printf("Enter CPI of student : ");
     scanf(" %f",&s.cpi);
     printf("Enter House of student : ");
     scanf(" %s",s.a.house);    
     printf("Enter City of student : ");
     scanf(" %s",s.a.city);    
     printf("Enter State of student : ");
     scanf(" %s",s.a.state);
     printf("\nName - %s",s.name);
     printf("\nRoll NO. - %d",s.roll_no);
     printf("\nCPI - %2.3f",s.cpi);
     printf("\nHouse - %s",s.a.house);
     printf("\nCity - %s",s.a.city);
     printf("\nState - %s",s.a.state);
}