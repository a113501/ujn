#include<stdio.h>
#define N 10
void move(int a[],int n);
int main()
{ 
	int a[N],n,temp,i; 
	while(scanf("%d",&temp)!=EOF)
	{
		a[0]=temp;
		for(i=1;i<10;i++)
			scanf("%d",&a[i]);
		scanf("%d",&n);
		move(a,n);
		for(i=0;i<N;i++)  
		{
			printf("%d",a[i]); 
			if(i!=N-1)
				putchar(' ');
			if(i==N-1)
				putchar('\n');
	   }
     }
return 0;
}
void move(int a[],int n)
 {
 	int i,j,tmp;
 	for(i=0;i<n;i++)
 	{
	 	tmp=a[N-1];
	 	for(j=N;j>1;j--)
	 		a[j-1]=a[j-2];
 		a[0]=tmp;
	 }
}
 
