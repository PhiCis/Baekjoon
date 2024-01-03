#include<bits/stdc++.h>
using namespace std;

int z, n, c[1000010], a[1000010];
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>z;
	while(z--)
	{
		vector<vector<int> > v;
		cin>>n;
		for(int i=0;i<n;i++) cin>>c[i];
		for(int i=0;i<4;i++)
		{
			vector<int> s(n);
			s[0]=i/2;
			s[1]=i%2;
			for(int j=2;j<n;j++)
			{
				if(c[j-1]) s[j]=s[j-2];
				else s[j]=1-s[j-2];
			}
			
			int r=0, p=0;
			for(int j=0;j<n;j++)
			{
				a[j]=0;
				if(j<=r) a[j]=min(a[2*p-j], r-j);
				while(j-a[j]-1>=0&&j+a[j]+1<n&&s[j-a[j]-1]==s[j+a[j]+1]) a[j]++;
				if(r<j+a[j])
				{
					r=j+a[j];
					p=j;
				}
			}
			
			for(int j=0;j<n;j++)
			{
				if(c[j]!=a[j]) goto skip;
			}
			v.push_back(s);
			skip:;
		}
		cout<<v.size()<<"\n";
		for(int i=0;i<v.size();i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<v[i][j];
			}
			cout<<"\n";
		}
	}
}