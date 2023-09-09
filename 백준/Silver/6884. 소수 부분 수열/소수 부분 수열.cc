#include<bits/stdc++.h>
using namespace std;
bool p[100000010];

int n, a[10010], s[10010], t;
main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	p[2]=true;
	for(int i=3;i<=100000000;i+=2) p[i]=true;
	for(int i=3;i*i<=100000000;i+=2)
		for(int j=i*i;j<=100000000;j+=2*i) p[j]=false;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			s[i]=s[i-1]+a[i];
		}
		for(int k=2;k<=n;k++)
		{
			for(int j=k;j<=n;j++)
			{
				if(p[s[j]-s[j-k]])
				{
					cout<<"Shortest primed subsequence is length "<<k<<": ";
					for(int i=j-k+1;i<=j;i++) cout<<a[i]<<" ";
					cout<<"\n";
					goto skip;
				}
			}
		}
		cout<<"This sequence is anti-primed.\n";
		skip:;
	}
}