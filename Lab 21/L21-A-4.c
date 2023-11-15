//Append one file at the end of other (f2 appended after f1, f2 is unchanged)

#include<stdio.h>
void main(){
     FILE *f1,*f2;
     char c;
     f1=fopen("file1.txt","a+");
     f2=fopen("file2.txt","a+");
if(f1==NULL || f2==NULL){
     printf("Error in opening File/Files\n");
}
else{
     fputc('\n',f1);
     do{
          c=fgetc(f2);
          fputc(c,f1);
     }while(c!=EOF);
     printf("File-2 appended to File-1 successfully !");
     fclose(f1);
     fclose(f2);
}
}