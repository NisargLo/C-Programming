//Addition of 2 Time

#include<stdio.h>
struct time{
     int h;
     int m;
     int s;
}t[3];
void main(){
     int i;
     for(i=0;i<2;i++){
          printf("\nEnter Time %d :- \n",i+1);
          printf("Hours - ");
          scanf("%d",&t[i].h);
          printf("Minutes - ");
          scanf("%d",&t[i].m);
          printf("Seconds - ");
          scanf("%d",&t[i].s);
     }
     t[2].h = t[0].h + t[1].h;
     t[2].m = t[0].m + t[1].m;
     t[2].s = t[0].s + t[1].s;
     if(t[2].s >= 60){
          t[2].s-=60;
          t[2].m++;
     }
     if(t[2].m >= 60){
          t[2].m-=60;
          t[2].h++;
     }
     printf("\nSum  =  %d : %d : %d",t[2].h,t[2].m,t[2].s);
}