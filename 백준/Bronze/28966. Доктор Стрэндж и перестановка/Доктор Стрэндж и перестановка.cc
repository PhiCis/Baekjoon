#include<bits/stdc++.h>
using namespace std;

int n, a[1010], c[1010];
vector<int> v;
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if((a[i]+i)&1) c[i]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i])
		{
			v.push_back(i);
			ans++;
		}
	}
	if(ans==0)
	{
		if(n==2) cout<<"-1 -1";
		else cout<<"1 3";
	}
	else if(ans==2)
	{
		if((v[0]+v[1])&1) cout<<v[0]<<" "<<v[1];
		else cout<<"-1 -1";
	}
	else
	{
		cout<<"-1 -1";
	}
}