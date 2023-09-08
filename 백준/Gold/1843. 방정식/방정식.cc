#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000050], p[1000050];
vector<int> v;
long long ans1, ans2, ans3;

int main()
{
	cin>>n;
	for(int i=3;i<=n;i++) ans1+=(i-1)>>1;
	cout<<ans1<<"\n";
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) a[i]=1, v.push_back(i);
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=i;j<v.size();j++)
		{
			if(a[v[i]+v[j]]) ans2++;
		}
	}
	cout<<ans2<<"\n";
	p[2]=1;
	for(int i=3;i<=n;i+=2) p[i]=1;
	for(int i=3;i*i<=n;i+=2)
	{
		for(int j=i*i;j<=n;j+=2*i)
		{
			p[j]=0;
		}
	}
	for(int i=3;i<=n;i++)
	{
		if(p[i]&p[i+2]) ans3++;
	}
	cout<<ans3;
}