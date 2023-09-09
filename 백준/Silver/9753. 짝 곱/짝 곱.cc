#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n;
int p[1000010];

int main()
{
	for(ll i=2;i<=1000000;i++) p[i]=i;
	for(ll j=4;j<=1000000;j+=2) p[j]=2;
	for(ll i=3;i*i<=1000000;i+=2)
		for(ll j=i*i;j<=1000000;j+=2*i)
			if(p[j]==j) p[j]=i;
	
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		if(n==1) n++;
		while(1)
		{
//			printf("%d %d %d\n", n, p[n], p[n/p[n]]);
			if(p[n]!=n && p[n/p[n]]==n/p[n] && n/p[n]!=p[n])
			{
				printf("%d\n", n);
				break;
			}
			n++;
		}
	}
}