#include<stdio.h>
void main() {
     int uc;
     float tb;
//uc - unit charge
//tb - total bill
     printf("Enter Electricity Unit Charge : ");
     scanf("%d",&uc);
     if(uc<=50){
          tb=uc*0.5;
          tb=tb+(tb*0.2);
          printf("Total ELectricity Bill : %f Rs.",tb);
     }
     else if(uc>50 && uc<=150){
          tb=(50*0.5)+(uc-50)*0.75;
          tb=tb+(tb*0.2);
          printf("Total ELectricity Bill : %f Rs.",tb);
     }
     else if(uc>150 && uc<=250){
          tb=(50*0.5)+(100*0.75)+(uc-150)*1.2;
          tb=tb+(tb*0.2);
          printf("Total ELectricity Bill : %f Rs.",tb);
     }
     else{
          tb=(50*0.5)+(100*0.75)+(100*1.2)+(uc-250)*1.5;
          tb=tb+(tb*0.2);
          printf("Total ELectricity Bill : %f Rs.",tb);
     }
}