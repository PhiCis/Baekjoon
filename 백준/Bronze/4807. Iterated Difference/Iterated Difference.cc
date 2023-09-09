#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, a[30];

main()
{
	int cs=0;
	while(1)
	{
		cs++;
		cin>>n;
		if(!n) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		cout<<"Case "<<cs<<": ";
		int cnt=0;
		while(cnt<=1000)
		{
			for(int i=2;i<=n;i++)
			{
				if(a[i]!=a[i-1]) goto skip;
			}
			cout<<cnt<<" iterations\n";
			goto skip2;
			skip:;
			int tmp=abs(a[n]-a[1]);
			for(int i=1;i<n;i++)
			{
				a[i]=abs(a[i]-a[i+1]);
			}
			a[n]=tmp;
			cnt++;
		}
		cout<<"not attained\n";
		skip2:;
		
	}
}