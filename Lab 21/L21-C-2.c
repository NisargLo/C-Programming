//Delete all blank lines in a file then insert a blank line after the third line in a file

#include<stdio.h>
void main(){
     FILE *f,*temp;
     char c[10000];
     int s=0;
     f=fopen("file.txt","r+");
     temp=fopen("temp.txt","w");
if(f==NULL){
     printf("Error in opening File\n");
}
else{
     while(!feof(f)){
          fgets(c,sizeof(c),f);
          if(c[0]!='\n'){
               fputs(c,temp);
          }
          s++;
          if(s==2){
               fputc('\n',temp);
          }
     }
     fclose(f);
     fclose(temp);
     remove("file.txt");
     rename("temp.txt","file.txt");
}
}