#include <bits/stdc++.h>
using namespace std;

vector<int> pi, ans;

void kmp(vector<int> s, vector<int> p, vector<int>& f)
{
	int n=s.size(), m=p.size();
	int j=0;
	for(int i=1;i<n;i++)
	{
		while((j>0&&s[i]!=p[j])||j==m) j=pi[j-1];
		if(s[i]==p[j]) f[i]=++j;
	}
}
int n, k, m;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n>>k;
	vector<vector<int> > v;
	v.resize(n);
	for(int i=0;i<n;i++)
	{
		cin>>m;
		v[i].resize(m);
		for(int j=0;j<m;j++) cin>>v[i][j];
	}
	for(int i=k;i<=v[0].size();i++)
	{
		vector<int> p;
		for(int j=i-k;j<i;j++)
		{
			p.push_back(v[0][j]);
		}
		pi.clear();
		pi.resize(p.size());
		kmp(p, p, pi);
		for(int j=1;j<n;j++)
		{
			vector<int> s;
			s.push_back(2e9);
			for(int l=0;l<v[j].size();l++)
			{
				s.push_back(v[j][l]);
			}
			ans.clear();
			ans.resize(s.size());
			kmp(s, p, ans);
			int ANS=0;
			for(int i=1;i<s.size();i++)
		    {
		    	if(ans[i]==p.size()) ANS++;
			}
			s.clear();
			s.push_back(2e9);
			for(int l=v[j].size()-1;l>=0;l--)
			{
				s.push_back(v[j][l]);
			}
			ans.clear();
			ans.resize(s.size());
			kmp(s, p, ans);
			for(int i=1;i<s.size();i++)
		    {
		    	if(ans[i]==p.size()) ANS++;
			}
			if(ANS==0) goto skip;
		}
		cout<<"YES\n";
		return 0;
		skip:;
	}
	cout<<"NO\n";
}