 //Count frequency of digits in an integer

 #include<stdio.h>
 void main() {
     int n,i,r,d0,d1,d2,d3,d4,d5,d6,d7,d8,d9;
     d0=d1=d2=d3=d4=d5=d6=d7=d8=d9=0;
     printf("Enter Integral Number : "); 
     scanf("%d",&n);
     for(i=1;n!=0;i++){
          r=n%10;
          n=n/10;
          switch(r) {
               case 0 : d0++;
               break;
               case 1 : d1++;
               break;
               case 2 : d2++;
               break;
               case 3 : d3++;
               break;
               case 4 : d4++;
               break;
               case 5 : d5++;
               break;
               case 6 : d6++;
               break;
               case 7 : d7++;
               break;
               case 8 : d8++;
               break;
               case 9 : d9++;
               break;
          }
     }
     printf("\nFrequency of 0 = %d",d0);
     printf("\nFrequency of 1 = %d",d1);
     printf("\nFrequency of 2 = %d",d2);
     printf("\nFrequency of 3 = %d",d3);
     printf("\nFrequency of 4 = %d",d4);
     printf("\nFrequency of 5 = %d",d5);
     printf("\nFrequency of 6 = %d",d6);
     printf("\nFrequency of 7 = %d",d7);
     printf("\nFrequency of 8 = %d",d8);
     printf("\nFrequency of 9 = %d",d9);
 }