#include<stdio.h>
int sum(int n);
int main(){
	int x,temp,re;
	while(scanf("%d",&temp)!=EOF){
		x=temp;
		re=sum(x);
		printf("%d\n",re);
	}
}
int sum(int n){
	int i,tot=0,rem=0,dig;
	for(i=0;i<10;i++){
		dig=n%10;
		tot+=dig;
		n/=10;
	}
	return tot;
}
