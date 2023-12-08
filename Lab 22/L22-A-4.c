//Allocate dynamic memory for structure variable.

#include<stdio.h>
#include<stdlib.h>
void main(){
     int n,i,*p;
     printf("How many books are there : ");
     scanf("%d",&n); 
     struct book{
          char name[100];
          char author[100];
          int page;
          int price;
     }b[n];
     p=(int *)calloc(n,10);             
     for(i=0;i<n;i++){
          printf("\nEnter Name of book %d : ",i+1);
          scanf("%s",b[i].name);
          printf("Enter Name of Author of book %d : ",i+1);
          scanf("%s",b[i].author);
          printf("Enter Pages of book %d : ",i+1);
          scanf("%d",&b[i].page);
          printf("Enter Price of book %d : ",i+1);
          scanf("%d",&b[i].price);
     }
     for(i=0;i<n;i++){
          printf("\n\nName of book %d - %s",i+1,b[i].name);
          printf("\nName of Author of book %d - %s",i+1,b[i].author);
          printf("\nPages of book %d - %d",i+1,b[i].page);
          printf("\nPrice of book %d - %d",i+1,b[i].price);
          }
}