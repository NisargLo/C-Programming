//Capitalize first letter of every word in file 1 & print it to file 2.

#include<stdio.h>
void main(){
     int i,l;
     char *dp,c;
     FILE *f1,*f2;
     f1=fopen("file1.txt","r+");
     f2=fopen("file2.txt","w+");
if(f1==NULL || f2==NULL){
     printf("Error in opening File\n");
}
else{
     fseek(f1,0,SEEK_END);
     l=ftell(f1);
     dp=(char *)malloc(l*sizeof(char));
     rewind(f1);
     dp[0]=fgetc(f1);
     if(dp[0]>='a' && dp[0]<='z'){
          dp[0]-=32;
     }
     fputc(dp[0],f2);
     fseek(f1,-1,SEEK_CUR);
     for(i=0;i<l;i++){
          dp[i]=fgetc(f1);
          dp[i+1]=fgetc(f1);
               if(dp[i]=='\n' || dp[i]=='\t' || dp[i]==' '){
                    if(dp[i+1]>='a' && dp[i+1]<='z'){
                         dp[i+1]-=32;
                    }
               }
               fputc(dp[i+1],f2);
               fseek(f1,-1,SEEK_CUR);
     }
}
     fclose(f1);
     fclose(f2);
}