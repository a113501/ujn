#include<stdio.h>
double Arr(int a,int b);
double Arr(int a,int b){
	double sum=a+b;
	double end=sum/2;
	return end;
}
int main(){
	int a,b,temp;
	while(scanf("%d",&temp)!=EOF)
	{	
		a=temp;
		scanf("%d",&b);
		double result=Arr(a,b);
		printf("%.1f\n",result);
	}
	return 0;
}

