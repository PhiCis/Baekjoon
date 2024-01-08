#include<bits/stdc++.h>
using namespace std;
int t, n, a, b, c, k;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<int, int> m;
		int ans=9999, ansi=0, tmp=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			m[a]++;
		}
		cin>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>a>>b>>c;
			if(m[a])
			{
				if(b==-1) continue;
				if(b*100+c<=600) tmp++;
				if(ans>b*100+c)
				{
					ans=b*100+c;
					ansi=a;
				}
			}
		}
		cout<<ansi<<" "<<tmp<<"\n";
	}
}