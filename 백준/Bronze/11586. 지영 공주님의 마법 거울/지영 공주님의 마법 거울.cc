#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	scanf("%d", &n);
	vector<string> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	scanf("%d", &a);
	if(a==1)
	{
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<"\n";
		}
	}
	if(a==2)
	{
		for(int i=0;i<n;i++)
		{
			reverse(v[i].begin(), v[i].end());
			cout<<v[i]<<"\n";
		}
	}
	if(a==3)
	{
		for(int i=n-1;i>=0;i--)
		{
			cout<<v[i]<<"\n";
		}
	}
}