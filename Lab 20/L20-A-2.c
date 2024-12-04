//Create a structure book with book title, author, publication, and price. Read data of 3 books and display

#include<stdio.h>
struct book{
     char t[100];
     char a[100];
     char p[100];
     int pr;
}b[3];
void main(){
     int i;
     for(i=0;i<3;i++){
          printf("\nEnter title of book %d : ",i+1);
          scanf(" %s",b[i].t);
          printf("Enter author of book %d : ",i+1);
          scanf(" %s",b[i].a);
          printf("Enter publication of book %d : ",i+1);
          scanf(" %s",b[i].p);
          printf("Enter price of book %d : ",i+1);
          scanf(" %d",&b[i].pr);
     }
     for(i=0;i<3;i++){
          printf("\nBook %d :\n",i+1);
          printf("Title - %s\n",b[i].t);
          printf("Author - %s\n",b[i].a);
          printf("Publication - %s\n",b[i].p);
          printf("Price - %d\n",b[i].pr);
     }
}