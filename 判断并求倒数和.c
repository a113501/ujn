#include<stdio.h>
double Cal(int n);
int main(){
	int n;
	double res;
	scanf("%d",&n);
	res=Cal(n);
	printf("%f",res);
	return 0;
} 
double Cal(int n){
	int i;
	double tot=0,p;
	if(n%2==0){
			for(i=1;i<=n;i+=2){
			p=1.0/i;
			tot+=p;	
		}
	}
	else{
			for(i=1;i<=n;i+=2){
			p=1.0/i;
			tot+=p;	
		}
	}

		return tot;
}
