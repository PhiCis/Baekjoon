#include<bits/stdc++.h>
using namespace std;

string s, t;
int a[200200];
int ans;

int main()
{
	cin>>t;
	s="$";
	for(int i=0;i<t.size();i++)
	{
		s+=t[i];
		s+="$";
	}
	int n=s.size();
	
	int r=0, p=0;
	for(int i=0;i<n;i++)
	{
		a[i]=0;
		if(i<=r)
		{
			if(a[2*p-i]<r-i)
			{
				a[i]=a[2*p-i];
				goto skip;
			}
			else a[i]=r-i;
		}
		while(i-a[i]-1>=0&&i+a[i]+1<n&&s[i-a[i]-1]==s[i+a[i]+1]) a[i]++;
		if(r<i+a[i])
		{
			p=i;
			r=p+a[p];
		}
		skip:;
	}
	for(int i=0;i<n;i++)
	{
		ans=max(ans, a[i]);
	}
	cout<<ans;
	
}