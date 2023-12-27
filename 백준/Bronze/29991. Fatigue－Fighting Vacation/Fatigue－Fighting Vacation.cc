#include<bits/stdc++.h>
using namespace std;
long long k, n, m;
queue<long long> q1, q2;
long long c;
int ans=0;
int main()
{
	cin>>k>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		q1.push(c);
	}
	for(int j=1;j<=m;j++)
	{
		cin>>c;
		q2.push(c);
	}
	while((!q1.empty())&&(!q2.empty()))
	{
		if(k-q1.front()>=0)
		{
			k-=q1.front();
			q1.pop();
			ans++;
		}
		else
		{
			k+=q2.front();
			q2.pop();
			ans++;
		}
	}
	if(q1.empty())
	{
		ans+=q2.size();
	}
	if(q2.empty())
	{
		while(k-q1.front()>=0)
		{
			k-=q1.front();
			q1.pop();
			ans++;
		}
	}
	cout<<ans;
}