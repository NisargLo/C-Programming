//Copy one file to another file (f2 copied to f1, f2 is unchanged)

#include<stdio.h>
void main(){
     FILE *f1,*f2;
     char c;
     f1=fopen("file1.txt","w");
     f2=fopen("file2.txt","r");
if(f1==NULL || f2==NULL){
     printf("Error in opening File/Files\n");
}
else{
     do{
          c=fgetc(f2);
          fputc(c,f1);
     }while(c!=EOF);
     printf("File-2 copied to File-1 successfully !");
     fclose(f1);
     fclose(f2);
}
}