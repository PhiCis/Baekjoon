#include<bits/stdc++.h>
using namespace std;

string s[1010], a;

int main()
{
	cin>>a;
	int sz = a.size();
	for(int i=0;i<sz;i++)
	{
		for(int j=i;j<sz;j++)
		{
			s[i] = s[i]+a[j];
		}
	}
	sort(s, s+sz);
	for(int i=0;i<sz;i++)
	{
		cout<<s[i]<<"\n";
	}
}