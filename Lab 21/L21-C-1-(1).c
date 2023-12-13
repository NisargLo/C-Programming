//Capitalize first letter of every word in file & print it in terminal

#include<stdio.h>
void main(){
     int i,l;
     char *dp;
     FILE *f;
     f=fopen("file.txt","r+");
if(f==NULL){
     printf("Error in opening File\n");
}
else{
     fseek(f,0,SEEK_END);
     l=ftell(f);
     dp=(char *)malloc(l*sizeof(char));
     rewind(f);
     dp[0]=fgetc(f);
     if(dp[0]>='a' && dp[0]<='z'){
          dp[0]-=32;
     }
     printf("%c",dp[0]);
     fseek(f,-1,SEEK_CUR);
     for(i=0;i<l;i++){
          dp[i]=fgetc(f);
          dp[i+1]=fgetc(f);
               if(dp[i]=='\n' || dp[i]=='\t' || dp[i]==' '){
                    if(dp[i+1]>='a' && dp[i+1]<='z'){
                         dp[i+1]-=32;
                    }
               }
               printf("%c",dp[i+1]);
               fseek(f,-1,SEEK_CUR);
     }
}
     fclose(f);
}