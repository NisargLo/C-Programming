//Demonstrate functions fprintf(), fscanf(), fputc(), fputs(), fgetc(), fgets(), fseek(), ftell() and rewind()

#include<stdio.h>
void main(){
     FILE *pf;
     int a;
     char c,s[100];
     pf=fopen("file.txt","w");
     printf("\nEnter String : ");
     gets(s);
     fprintf(pf,"%s",s);
     printf("String printed successfully !");
     fclose(pf);
     pf=fopen("file.txt","r+");
     fgets(s,6,pf);
     printf("\nYour String (1st 5 Characters) - %s",s);
     c=getc(pf);
     printf("\nYour 6th Character - %c",c);
     fclose(pf);
     pf=fopen("file.txt","a+");
     fputs(" Hello 7",pf);
     fputc('B',pf);
     fclose(pf);
     pf=fopen("file.txt","r+");
     fgets(s,100,pf);
     printf("\nYour New String - %s",s);
     a=ftell(pf);
     printf("\nLenght of File - %d",a);
     fclose(pf);
}