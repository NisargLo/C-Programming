//Demonstrate structure pointer (Student : name,roll no,cpi)

#include<stdio.h>
struct student{
     char name[100];
     int roll_no;
     int CPI;
}s[2],*ps[2];
void main(){
     int i;
     for(i=0;i<2;i++){
          ps[i]=&s[i];
          printf("\nEnter Name of Student %d : ",i+1);
          scanf(" %s",s[i].name);
          printf("Enter Roll NO. of Student %d : ",i+1);
          scanf(" %d",&s[i].roll_no);
          printf("Enter CPI of Student %d : ",i+1);
          scanf(" %d",&s[i].CPI);
     }
     for(i=0;i<2;i++){
          printf("\nStudent %d : ",i+1);
          printf("\nName - %s",ps[i]->name);
          printf("\nRoll NO. - %d",ps[i]->roll_no);
          printf("\nCPI - %d\n",ps[i]->CPI);
     }
}