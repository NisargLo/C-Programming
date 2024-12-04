//Find the second largest number among three user input numbers.

#include<stdio.h>
void main() {
     int a,b,c;
     printf("Enter 3 Numbers : ");
     scanf("%d %d %d",&a,&b,&c);
if(a>b){
     if(b>c){
          printf("Second largest NO. is %d",b);
     }
     else if(a>c){
          printf("Second largest NO. is %d",c);
     }
     else{
          printf("Second largest NO. is %d",a);
     }
}
else if(a>c){
     printf("Second largest NO. is %d",a);
}
else{
     if(b>c){
           printf("Second largest NO. is %d",c);
     }
     else{
     printf("Second largest NO. is %d",b);
          }
     }
}