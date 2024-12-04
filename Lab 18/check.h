void pr(int n){
	int i,flag=0;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("\nNot Prime NO.");
	}
	else{
		printf("\nPrime NO.");
	}
}
void a(int n){
	int temp=n,m,i,a,s=0,r;
	for(i=0;temp!=0;i++){
		temp/=10;
	}
	a=i;
	temp=n;
	for(;temp!=0;){
		r=temp%10;
		temp=temp/10;
		m=1;
		for(i=1;i<=a;i++){
			m=m*r;
		}
		s=s+m;
	}
	if(s==n){
		printf("\nArmstrong NO.");
	}
	else{
		printf("\nNot Armstrong NO.");
	}
}
void pe(int n){
	int i,s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
		}
	}
	if(s==n){
		printf("\nPerfect NO.");
	}
	else{
		printf("\nNot Perfect NO.");
	}
}