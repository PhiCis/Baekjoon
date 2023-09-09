#include<bits/stdc++.h>
using namespace std;

int n;
int x[222], y[222];
map<pair<int, int> , int> m;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &x[i], &y[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int tmp1=x[j]-x[i];
			int tmp2=y[j]-y[i];
			if(tmp1<0) tmp2*=-1, tmp1*=-1;
			if(tmp1==0) tmp2=abs(tmp2);
			int g=abs(__gcd(tmp1, tmp2));
			tmp1/=g, tmp2/=g;
			m[{tmp1, tmp2}]=1;
		}
	}
	printf("%d", m.size());
}