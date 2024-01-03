#include<bits/stdc++.h>
using namespace std;

string s, t;
int a[4000010], n;
long long ans;

void manachers(string s, int n)
{
	int r=0, p=0;
	for(int i=0;i<n;i++)
	{
		if(i<=r) a[i]=min(a[2*p-i], r-i);
		else a[i]=0;
		while(i-a[i]-1>=0 && i+a[i]+1<n && s[i-a[i]-1]==s[i+a[i]+1]) a[i]++;
		if(r<i+a[i])
		{
			r=i+a[i];
			p=i;
		}
	}
}


int main()
{
	cin>>s;
	t="$";
	for(int i=0;i<s.size();i++)
	{
		t+=s[i];
		t+="$";
	}
//	cout<<t;
	manachers(t, t.size());
//	for(int i=0;i<t.size();i++) cout<<a[i];
	for(int i=0;i<t.size();i++)
	{
		ans+=a[i]+1>>1;
	}
	cout<<ans;
}