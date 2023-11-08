void strlen1(char s1[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
     }
     printf("\nLenght = %d",i);
}
void strcmp1(char s1[],char s2[]){
     int ls1=0,ls2=0,i;
     for(i=0;s1[i]!='\0';i++){
          ls1++;
     }
     for(i=0;s2[i]!='\0';i++){
          ls2++;
     }
     if(ls1!=ls2){
          for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
               if(s1[i]!='\0' && s2[i]=='\0'){
                    printf("String 1 > String 2");
                    break;
               }
               if(s1[i]=='\0' && s2[i]!='\0'){
                    printf("String 1 < String 2");
                    break;
               }
          }
     }
     else{
          printf("String 1 = String 2");
     }
}
void strcpy1(char s1[],char s2[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
          s1[i]=s2[i];
     }
     s1[i]='\0';
     printf("String 1 : ");
     puts(s1);
}
void strcat1(char s1[],char s2[]){
     int i,j;
     for(i=0;s1[i]!='\0';i++){
     }
     for(j=0;s2[j]!='\0';j++,i++){
          s1[i]=s2[j];
     }
     s1[i]='\0';
     printf("String 1 : %s",s1);
}
void strchr1(char s1[],char c){
     int i;
     for(i=0;s1[i]!='\0';i++){
          if(c==s1[i]){
               for(;s1[i]!='\0';i++){
                    printf("%c",s1[i]);
               }
          }
     }
}
void strstr1(char s1[],char s2[]){
     int i,j,b;
     for(i=0,j=0;s1[i]!='\0';i++){
          if(s2[j]==s1[i]){
               b=i;
               for(j=0;s2[j]!='\0';j++,i++){
                    if(s2[j]==s1[i]){
                         continue;
                    }
                    else{
                         break;
                    }
               }
               if(s2[j]=='\0'){
                    for(;s1[b]!='\0';b++){
                         printf("%c",s1[b]);
                    }
               }
               else{
                    continue;
               }
          }
     }
}
void strrev1(char s1[]){
     int i,j;
     for(i=0;s1[i]!='\0';i++){
     }
     i--;
     printf("String 1 : ");
     for(j=i;j>=0;j--){
          printf("%c",s1[j]);
     }
}
void strlwr1(char s1[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
          if(s1[i]>='A' && s1[i]<='Z'){
               s1[i]+=32;
          }
     }
     puts(s1);
}
void strupr1(char s1[]){
     int i;
     for(i=0;s1[i]!='\0';i++){
          if(s1[i]>='a' && s1[i]<='z'){
               s1[i]-=32;
          }
     }
     puts(s1);
}