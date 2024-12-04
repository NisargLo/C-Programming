//String Reverse

#include<stdio.h>
void main(){
     int i,l,j;
     char s1[100],temp;
     printf("Enter String 1 : ");
     gets(s1);
     for(l=0;s1[l]!='\0';l++){
     }
     for(i=0,j=l-1;i<l/2;i++,j--){
         
          temp=s1[i];
          s1[i]=s1[j];
          s1[j]=temp;
     //Here swaping is done

     }
     puts(s1);
}     