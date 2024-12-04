//Demonstrate functions fprintf(), fscanf(), fputc(), fputs(), fgetc(), fgets(), fseek(), ftell() and rewind()

#include<stdio.h>
void main(){
     FILE *pf;
     int a,f,result;
     char c,d[100],e[100],s[100];

     pf=fopen("file.txt","w");
if(pf==NULL){
     printf("Error in opening File\n");
}
else{
     printf("\nEnter String : ");
     gets(s);
     fprintf(pf,"%s",s);
     printf("String printed successfully in file !");
     fclose(pf);
     
     pf=fopen("file.txt","r+");
     fgets(s,100,pf);
     printf("\nYour String - %s",s);
     fseek(pf,3,SEEK_SET);
     c=fgetc(pf);
     printf("\nYour 4th Character - %c",c);
     fclose(pf);

     pf=fopen("file.txt","a+");
     fputs(" Hello 7",pf);
     fputc('7',pf);
     fclose(pf);

     pf=fopen("file.txt","r+");
     fgets(s,100,pf);
     printf("\nModified String - %s",s);
     rewind(pf);
     result=fscanf(pf,"%s %s %d",d,e,&f);
     if(result==3){
          printf("\nPrinted after using fscanf() - %s %s %d",d,e,f);
     }
     else{
          printf("\nError of fscanf()");
     }
     a=ftell(pf);
     printf("\nLenght of File - %d",a);
     fclose(pf);
}
}

/*
Reference :-
eg - fseek(pf , 3 , SEEK_SET)

SEEK_SET: the beginning of the file
SEEK_CUR: the current position of the file pointer
SEEK_END: the end of the file
*/