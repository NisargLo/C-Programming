 //Count frequency of digits in an integer

 #include<stdio.h>
 void main() {
     int n,i,r,d[10];
     printf("Enter Integral Number : "); 
     scanf("%d",&n);
     for(i=0;i<10;i++){
          d[i]=0;
     }
     for(i=1;n!=0;i++){
          r=n%10;
          n=n/10;
          d[r]++;
     }
     for(r=0;r<10;r++){
          printf("\nFrequency of %d = %d",r,d[r]);
     }
 }