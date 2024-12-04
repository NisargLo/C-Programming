//Add two distances in feet and inches using structure

#include<stdio.h>
struct distance{
     int feet;
     int inches;
}d[3];
void main(){
     int i;
     for(i=0;i<2;i++){
          printf("\nEnter feet, of distance %d : ",i+1);
          scanf("%d",&d[i].feet);
          printf("Enter inches, of distance %d : ",i+1);
          scanf("%d",&d[i].inches);
     }
     d[2].feet = d[0].feet + d[1].feet;
     d[2].inches = d[0].inches + d[1].inches;
     printf("\nSum of feet = %d",d[2].feet);
     printf("\nSum of Inches = %d",d[2].inches);
}