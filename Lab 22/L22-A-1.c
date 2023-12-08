//Allocate and de-allocate memory for int, char and float variable at run time.

#include<stdio.h>
#include<stdlib.h>
void main(){
     int n1,n2,n3,i,*p1;
     float *p2;
     char *p3;
     printf("Enter NO. of int elements in Dynamic Memory : ");
     scanf("%d",&n1);
     p1=(int *)malloc(n1*sizeof(int));
     printf("\n");
     for(i=0;i<n1;i++){
          printf("Enter NO. %d : ",i+1);
          scanf("%d",&p1[i]);
     }
     printf("\nEnter NO. of float elements in Dynamic Memory : ");
     scanf("%d",&n2);
     p2=(float *)malloc(n2*sizeof(float));
     printf("\n");
     for(i=0;i<n2;i++){
          printf("Enter NO. %d : ",i+1);
          scanf("%f",&p2[i]);
     }
     printf("\nEnter NO. of char elements in Dynamic Memory : ");
     scanf("%d",&n3);
     p3=(char *)calloc(n3,sizeof(char));
     printf("\n");
     for(i=0;i<n3;i++){
          printf("Enter NO. %d : ",i+1);
          scanf(" %c",&p3[i]);
     }
     for(i=0;i<n1;i++){
          printf("\nint element %d = %d",i+1,p1[i]);
     }
     printf("\n");
     for(i=0;i<n2;i++){
          printf("\nfloat element %d = %f",i+1,p2[i]);
     }
     printf("\n");
     for(i=0;i<n3;i++){
          printf("\nchar element %d = %c",i+1,p3[i]);
     }
     free(p1);
     free(p2);
     free(p3);
}