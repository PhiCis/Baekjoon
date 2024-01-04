#include<bits/stdc++.h>
using namespace std;

vector<int> p, pi;
int n;

void kmp(vector<int> s, vector<int> p, vector<int>& f)
{
	int j=0;
	for(int i=1;i<n;i++)
	{
		while((j>0&&s[i]!=p[j])||j==n) j=pi[j-1];
		if(s[i]==p[j]) f[i]=++j;
	}
}
int ans, ans2;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	

	cin>>n;
	p.resize(n);
	for(int i=n-1;i>=0;i--)
	{
		cin>>p[i];
	}
	pi.resize(n);
	kmp(p, p, pi);
	for(int i=0;i<n;i++)
	{
		ans=max(ans, pi[i]);
	}
	if(ans==0)
	{
		cout<<-1;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(ans==pi[i]) ans2++;
	}
	cout<<ans<<" "<<ans2;
}