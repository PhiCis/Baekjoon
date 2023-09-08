#include<bits/stdc++.h>
using namespace std;

int p[1000010];

int main()
{
	for(int i=1;i<=1000000;i++)
	{
		if(i%2==0) p[i]=2;
		else p[i]=i;
	}
	for(int i=3;i<=1000;i+=2)
	{
		for(int j=i*i;j<=1000000;j+=2*i)
		{
			p[j]=min(p[j], i);
		}
	}
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		while(n>1)
		{
			int tmp=p[n];
			int tmptmp=0;
			while(n%tmp==0)
			{
				tmptmp++;
				n/=tmp;
			}
			printf("%d %d\n", tmp, tmptmp);
		}
	}
}