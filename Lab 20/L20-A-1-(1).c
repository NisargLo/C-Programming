//Create, declare and initialize structure employee - (structure variable declaration along with structure definition)

#include<stdio.h>
struct employee{
     int ID;
     char name[100];
     int salary;
}e;
void main(){
     printf("Enter Name of employee : ");
     gets(e.name);
     printf("Enter ID of employee : ");
     scanf("%d",&e.ID);
     printf("Enter Salary of employee : ");
     scanf("%d",&e.salary);
     printf("\nName - %s",e.name);
     printf("\nID - %d",e.ID);
     printf("\nSalary - %d",e.salary);
}