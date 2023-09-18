#include<stdio.h>
#include<time.h>
     void main(){
          time_t t;
          time(&t);
          printf("Current Date & Time is %s",ctime(&t));
     }