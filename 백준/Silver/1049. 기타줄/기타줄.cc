#include<stdio.h>
#include<algorithm>
using namespace std;
int n, k, i, a, b, mina=2e9, minb=2e9;
int main()
{
	scanf("%d%d", &n, &k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d", &a, &b);
		if(a<mina) mina=a;
		if(b<minb) minb=b;
	}
	printf("%d", min(min(mina*((n-1)/6+1), mina*(n/6)+minb*(n%6)), minb*n));
}