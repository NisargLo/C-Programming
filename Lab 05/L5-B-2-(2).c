//Check whether the given number is odd or even using bitwise operator.

#include<stdio.h>
void main(){
int a;
printf("Enter Number : ");
scanf("%d",&a);
if((a|1)==a){printf("Your Number is Odd");
}
else {printf("Your Number is Even");
}
}
