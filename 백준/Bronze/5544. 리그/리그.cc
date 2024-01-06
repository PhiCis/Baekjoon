#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, d, A[110];

int main()
{
	cin>>n;
	for(int i=0;i<n*(n-1)/2;i++)
	{
		cin>>a>>b>>c>>d;
		if(c>d) A[a]+=3;
		if(c<d) A[b]+=3;
		if(c==d) A[a]++, A[b]++;
	}
	for(int i=1;i<=n;i++)
	{
		int ans=0;
		for(int j=1;j<=n;j++)
		{
			if(A[i]<A[j]) ans++;
		}
		cout<<ans+1<<"\n";
	}
}