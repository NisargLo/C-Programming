//Display the current Date & Time. [#include <time.h> for time and ctime function and time_t datatype.]

#include<stdio.h>
#include<time.h>
     void main(){
          time_t t;
          time(&t);
          printf("Current Date & Time is %s",ctime(&t));
     }