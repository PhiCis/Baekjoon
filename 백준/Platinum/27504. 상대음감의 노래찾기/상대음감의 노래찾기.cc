#include<bits/stdc++.h>
using namespace std;

vector<int> pi;

void kmp(vector<int> s, vector<int> p, vector<int>& f)
{
	int j=0;
	int n=s.size(), m=p.size();
	for(int i=1;i<n;i++)
	{
		while((j>0&&s[i]!=p[j])||j==m) j=pi[j-1];
		if(s[i]==p[j]) f[i]=++j;
	}
}
int ans, ans2;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	
	int n;
	cin>>n;
	vector<int> c(n);
	vector<vector<int> > a(n);
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		a[i].resize(c[i]);
		cin>>a[i][0];
		for(int j=1;j<c[i];j++)
		{
			cin>>a[i][j];
		}
		for(int j=c[i]-1;j>=1;j--)
		{
			a[i][j]=a[i][j-1]-a[i][j];
		}
		a[i][0]=2e9;
	}
	int m;
	cin>>m;
	vector<int> p(m);
	cin>>p[0];
	for(int i=1;i<m;i++)
	{
		cin>>p[i];
		p[i-1]-=p[i];
	}
	p.resize(m-1);
	m--;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<c[i];j++)
//		{
//			cout<<a[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
//	for(int i=0;i<m;i++)
//	{
//		cout<<p[i]<<" ";
//	}
	
	pi.resize(m);
	kmp(p, p, pi);
	int flag=0;
	for(int i=0;i<n;i++)
	{
		vector<int> ans(c[i]);
		kmp(a[i], p, ans);
		for(int j=0;j<c[i];j++)
		{
			if(ans[j]==m)
			{
				flag=1;
				cout<<i+1<<" ";
				goto skip;
			}
		}
		skip:;
	}
	if(!flag) cout<<-1;
	
}