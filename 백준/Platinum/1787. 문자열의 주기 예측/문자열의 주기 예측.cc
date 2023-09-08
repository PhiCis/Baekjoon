#include <bits/stdc++.h>
using namespace std; 
#define INF 9e18
typedef long long ll;
string S;
long long n;
long long A;
int main()
{ 
	scanf("%lld\n", &n);
	getline(cin, S);
	
	vector<ll> F(n, 0);
	int j=0;
	for(int i=1;i<n;i++)
	{
		while(j>0&&S[i]!=S[j]) j=F[j-1];
		if(S[i]==S[j])
		{
			j++;
			F[i]=j;
		}
	}
	/*
	for(int i=1;i<n;i++)
	{
		printf("%lld ", F[i]);
	}
	*/
	vector<ll> ans(n, 0);
	for(int i=0;i<n;i++)
	{
		if(i==0) ans[i]=INF;
		if(F[i]==0) ans[i]=INF;
		else ans[i]=min(F[i], ans[F[i]-1]);
	}
	/*
	for(int i=0;i<n;i++)
	{
		printf("%lld ", ans[i]);
	}
	*/
	for(int i=0;i<n;i++)
	{
		if(ans[i]!=INF) A+=i-ans[i]+1;
	}
	printf("%lld\n", A);
}