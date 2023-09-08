#include<bits/stdc++.h>
using namespace std;

long long f[90], s[90], k;
vector<int> v;

int main()
{
	f[1]=1, f[2]=1;
	for(int i=3;i<90;i++) f[i]=f[i-1]+f[i-2];
	for(int i=1;i<90;i++) s[i]=s[i-1]+f[i];
//	cout<<s[89];
	cin>>k;
	while(k)
	{
		for(int i=1;i<90;i++)
		{
			if(k<=s[i]&&k>s[i-1])
			{
				v.push_back(i);
				k-=s[i-1]+1;
				break;
			}
		}
	}
	v.push_back(0);
	for(int i=1;i<v.size();i++)
	{
		cout<<1;
		for(int j=1;j<v[i-1]-v[i];j++)
		{
			cout<<0;
		}
	}
}