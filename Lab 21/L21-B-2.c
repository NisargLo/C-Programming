//Capitalize first letter of each word in file

#include<stdio.h>
void main(){
     FILE *f;
     int i,l;
     f=fopen("file.txt","w+");
if(f==NULL){
     printf("Error is opening File\n");
}
else{
     fseek(f,0,SEEK_END);
     l=ftell(f);
     char c[l];
     fseek(f,0,SEEK_SET);
     for(i=0;i<l;i++){
          c[i]=fscanf(f,"%c",&c[i]);
          if(c[i-1]==' ' || c[i-1]=='\n' || i==0){
               if(c[i]>='a' || c[i]<='z'){
                    c[i]-=32;
               }
          }
          printf("%c",c[i]);
     }
     fclose(f);
}
}