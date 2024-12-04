//Merge alternate lines from two files

#include<stdio.h>
void main(){
     char a[10000],c[10000];
     FILE *f1,*f2,*f3;
     int i=0;
     f1=fopen("file1.txt","r+");
     f2=fopen("file2.txt","r+");
     f3=fopen("file3.txt","w+");
if(f1==NULL || f2==NULL){
     printf("Error in opening File\n");
}
else {
     while(!feof(f1) || !feof(f2)){
          if(!feof(f1)){    
                    fgets(a,sizeof(a),f1);
                    fputs(a,f3);   
          }
          if(!feof(f2)){
                    fgets(c,sizeof(c),f2);
                    fputs(c,f3);
          }
          if(i==0){
               if(feof(f1)){
                    fputc('\n',f3);
                    i=1;
               }
               if(feof(f2)){
                    fputc('\n',f3);
                    i=1;
               }
          }
     }
     fclose(f1);
     fclose(f2);
     fclose(f3);
}
}


/*   feof( FILE Pointer ) means end of file ,in condition
     !feof( FILE Pointer ) means not end of file ,in condition
*/