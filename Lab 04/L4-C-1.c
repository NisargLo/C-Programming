//Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000 seconds = 02:46:40)]

#include<stdio.h>
void main() {
        int h,m,s;
        printf("Enter Seconds : ");
        scanf("%d",&s);
        h=s/3600;
        s=s%3600; 
     m=s/60;
     s=s%60;
     printf("Your Time in HH:MM:SS is %d:%d:%d",h,m,s);
}