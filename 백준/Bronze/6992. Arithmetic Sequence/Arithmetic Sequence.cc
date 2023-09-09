#include<bits/stdc++.h>
using namespace std;
int t, n, a[100100];
main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		int tmp=a[2]-a[1];
		for(int i=3;i<=n;i++)
		{
			if(tmp!=a[i]-a[i-1])
			{
				cout<<"The sequence [";
				for(int i=1;i<=n;i++)
				{
					cout<<a[i];
					if(i!=n) cout<<", ";
				}
				cout<<"] is not an arithmetic sequence.\n";
				goto skip;
			}
		}
		cout<<"The next 5 numbers after [";
		for(int i=1;i<=n;i++)
		{
			cout<<a[i];
			if(i!=n) cout<<", ";
		}
		cout<<"] are: [";
		for(int i=1;i<=5;i++)
		{
			cout<<a[n]+i*(a[n]-a[n-1]);
			if(i!=5) cout<<", ";
		}
		cout<<"]\n";
		skip:;
	}
}