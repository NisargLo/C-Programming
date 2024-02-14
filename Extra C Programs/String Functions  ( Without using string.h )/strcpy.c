//String Copy (s2 to s1, s2 is unchanged)

#include<stdio.h>
void main(){
     int i;
     char s1[100],s2[100];
     printf("Enter String 1 : ");
     gets(s1);
     printf("Enter String 2 : ");
     gets(s2);

     /*        for(i=0;s2[i]!='\0' || s1[i]!='\0';i++){
                    s1[i]='\0';
               }
     */
//use above for loop   or

     for(i=0;s2[i]!='\0';i++){
          s1[i]=s2[i];
     }

//use below statement (Here, in this program, this statement is used)
     s1[i]='\0';

     printf("String 1 : %s",s1);
}
