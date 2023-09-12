#include<bits/stdc++.h>
using namespace std;

string s;
int n;
int sa[100010], g[100010], t[100010];
int d=1;

bool cmp(int i, int j)
{
	if(g[i]!=g[j]) return g[i]<g[j];
	i+=d;
	j+=d;
	if(i<n&&j<n) return g[i]<g[j];
	else return i>j;
}

void SA()
{
	for(int i=0;i<n;i++)
	{
		sa[i]=i;
		g[sa[i]]=s[i];
	}
	
	while(1)
	{
		sort(sa, sa+n, cmp);
		t[0]=0;
		for(int i=1;i<n;i++)
		{
			t[i]=t[i-1]+cmp(sa[i-1], sa[i]);
		}
		for(int i=0;i<n;i++)
		{
			g[sa[i]]=t[i];
		}
		if(t[n-1]==n-1) break;
		d<<=1;
	}
}



int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin>>s;
	n = s.size();
	SA();
	for(int i=0;i<s.size();i++)
	{
		cout<<sa[i]<<"\n";
	}	
}