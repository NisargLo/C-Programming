//Print contents of file in reverse order

#include<stdio.h>
void main(){
     FILE *f;
     int i,l;
     f=fopen("file.txt","r");
if(f==NULL){
     printf("Error in opening File\n");
}
else{
     fseek(f,0,SEEK_END);
     l=ftell(f);
     for(i=1;i<=l;i++){
          fseek(f,-i,SEEK_END);
          printf("%c",fgetc(f));
    }
     fclose(f);
}
}