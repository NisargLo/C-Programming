// Count chars, spaces, tabs and new lines in a file

#include<stdio.h>
void main(){
     FILE *pf;
     char c;
     pf=fopen("file.txt","r");
     int c_line=0,c_tab=0,c_space=0,c_char=0;
     pf=fopen("file.txt","r");
     while(c!=EOF){
          c=getc(pf);
          if(c=='\n'){
               c_line++;
          }
          else if(c=='\t'){
               c_tab++;
          }
          else if(c==' '){
               c_space++;
          }
          else{
               c_char++;
          }
     }
     printf("\nCharacters - %d\nSpaces - %d\nTabs - %d\nLines - %d\n",c_char,c_space,c_tab,c_line);
     fclose(pf);
}