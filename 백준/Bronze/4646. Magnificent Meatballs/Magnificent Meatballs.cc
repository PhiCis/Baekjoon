#include<bits/stdc++.h>
using namespace std;

int n, a[100], s[100];

int main()
{
	while(1)
	{
		cin>>n;
		if(!n) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			s[i]=s[i-1]+a[i];
		}
		for(int i=1;i<n;i++)
		{
			if(s[n]==s[i]*2)
			{
				cout<<"Sam stops at position "<<i<<" and Ella stops at position "<<i+1<<".\n";
				goto skip;
			}
		}
		cout<<"No equal partitioning.\n";
		skip:;
	}
}