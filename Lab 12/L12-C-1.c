/*   Print Pascal triangle.

	1
	1  1
	1  2  1
	1  3  3  1
	1  4  6  4  1
	1  5 10 10  5  1
	and so on...
*/

#include<stdio.h>
void main() {
	int i,j,s,c=1,n;
/*	c - coef
	s - space
	n - NO. of lines
*/
	printf("Enter NO. : ");
	scanf("%d",&n);
	printf("%4d\n",c);
	for(i=1;i<=n;i++){
		for(j=0;j<=i;j++){
			if(j==0 || i==0){
				c=1;
			}
			else{
				c=c*(i-j+1)/j;
			}
			printf("%4d",c);
		}
	  	printf("\n");
	}
}