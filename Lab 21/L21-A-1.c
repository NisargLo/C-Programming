//Create, open and close a file

#include<stdio.h>
void main(){
     FILE *f;
if(f==NULL){
     printf("Error in opening File\n");
}
else{
     char c[50];
     f=fopen("file.txt","w");
     printf("File opened successfully !");
     printf("\nEnter Word : ");
     gets(c);
     fprintf(f,"%s",c);
     fclose(f);
     printf("File closed successfully !");
}
}