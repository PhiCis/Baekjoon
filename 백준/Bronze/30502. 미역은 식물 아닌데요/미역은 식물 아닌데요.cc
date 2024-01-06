#include<bits/stdc++.h>
using namespace std;

int n, m, A[1010];

int main()
{
	cin>>n>>m;
	while(m--)
	{
		int a, c;
		char b;
		cin>>a>>b>>c;
		if(b=='P') 
		{
			if(c==0) A[a]=-1;
			else
			{
				if(A[a]==2) A[a]=3;
				if(A[a]==0) A[a]=1;
			}
		}
		else
		{
			if(c==0)
			{
				if(A[a]==1) A[a]=3;
				if(A[a]==0) A[a]=2;
			}
			else A[a]=-1;
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(A[i]==3) ans++;
	}
	cout<<ans<<" ";
	ans=n;
	for(int i=1;i<=n;i++)
	{
		if(A[i]==-1) ans--;
	}
	cout<<ans;
}