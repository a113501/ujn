#include<stdio.h>
unsigned int Gcd(unsigned int M,unsigned int N);
unsigned int Gcd(unsigned int M,unsigned int N)
{
unsigned int Rem;
while(N > 0)
{
Rem = M % N;
M = N;
N = Rem;
}
return M;
}
int main(){
	unsigned int x,y,temp,gcd,lcm;
	while(scanf("%ud",&temp)!=EOF){
		x=temp;
		scanf("%ud",&y);
		gcd=Gcd(x,y);
		lcm=(x*y)/gcd;
		printf("%u %u\n",gcd,lcm);
	}
}
