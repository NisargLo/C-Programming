// n String Copy (s2 to s1, s2 is unchanged)

#include<stdio.h>
void main(){
     int i,n;
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);
     printf("Enter NO. : ");
     scanf("%d",&n);
     for(i=0;i<n;i++){
          s1[i]=s2[i];
     }
     printf("String 1 : %s",s1);
}
