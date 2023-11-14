//Create structure student with name, percentage and age. Read data of 5 students using array of structure

#include<stdio.h>
struct student{
     char name[100];
     float percentage;
     int age;
}s[5];
void main(){
     int i;
     for(i=0;i<5;i++){
          printf("\nEnter Name of student %d : ",i+1);
          scanf("%s",s[i].name);
          printf("Enter Percentage of student %d : ",i+1);
          scanf("%f",&s[i].percentage);
          printf("Enter Age of student %d : ",i+1);
          scanf("%d",&s[i].age);
     }
     for(i=0;i<5;i++){
          printf("\nStudent %d :- ",i+1);
          printf("\nName - %s",s[i].name);
          printf("\nPercentage - %f",s[i].percentage);
          printf("\nAge - %d\n",s[i].age);
     }
}