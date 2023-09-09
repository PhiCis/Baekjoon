#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		char a[110];
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			a[i]=s[i];
		}
		if(next_permutation(a, a+s.size()))
		{
			for(int i=0;i<s.size();i++)
			{
				cout<<a[i];
			}
		}
		else
		{
			prev_permutation(a, a+s.size());
			for(int i=0;i<s.size();i++)
			{
				cout<<a[i];
			}
		}
		cout<<"\n";
	}
}