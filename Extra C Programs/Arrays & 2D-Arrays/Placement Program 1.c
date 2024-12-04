/* Ask for :- 1) Which Standards do you teach?     [Eg: 1 to 12]
              2) NO. of students in all standards     [Eg: class 1 - 10 students]
              3) Yearly Fees of each standards     [Eg: class 1 - $100 per year]
              And give Total Income per year, to that Teacher
*/
#include<stdio.h>
void main() {
     int s[12],i,q;
     printf("How many standards are you teaching ? \n");
     scanf("%d",&q);
//s-standards which teacher teaches
     printf("\nEnter Standards, which you are teaching : ");
     for(i=0;i<q;i++){
          scanf("%d",&s[i]);
     }
     printf("\n");
     int ns[12],j;
//ns-NO. of students in particular standards
     for(j=0,i=0;j<q;j++,i++){
          printf("NO. of Students in standard %d : ",s[i]);
          scanf("%d",&ns[j]);
     }
     printf("\n");
     int f[12],k;
//f-fees of each standards
     for(k=0,i=0;k<q;k++,i++){
          printf("Fees of student in standard %d : ",s[i]);
          scanf("%d",&f[k]);
     }
     int m[12],l;
//m-multiplicatiion of fees & no. of students
     for(l=0,j=0,k=0;l<q;l++,j++,k++){
          m[l]=ns[j]*f[k];
     }
     int o,sum=0;
//s-sum of all multiplication
     for(o=0,l=0;o<q;o++,l++){
          sum=sum+m[l];
     }
     printf("\nTotal Yearly Income = %d",sum);
}