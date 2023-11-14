//Create, open and close a file

#include<stdio.h>
void main(){
     FILE *f;
     char c[50];
     f=fopen("file.txt","w");
     printf("File opened successfully.");
     printf("\nEnter a word : ");
     gets(c);
     fprintf(f,"%s",c);
     fclose(f);
     printf("File closed successfully.");
}
