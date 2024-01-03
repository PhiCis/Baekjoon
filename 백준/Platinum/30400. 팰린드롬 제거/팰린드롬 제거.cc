#include<bits/stdc++.h>
using namespace std;

string s, t;
int n, a[2000200], k;
int ans;
int main()
{
	cin>>n>>k;
	cin>>t;
	s="$";
	for(int i=0;i<t.size();i++)
	{
		s+=t[i];
		s+="$";
	}
	n=s.size();
//	cout<<s<<"\n";
	
	int r=0, p=0;
	for(int i=0;i<n;i++)
	{
		if(i<=r) a[i]=min(a[2*p-i], r-i);
		while(i-a[i]-1>=0&&i+a[i]+1<n&&s[i-a[i]-1]==s[i+a[i]+1]) a[i]++;
		if(r<i+a[i])
		{
			r=i+a[i];
			p=i;
		}
		if(a[i]>=k)
		{
			if((a[i]-k)%2==0)
			{
				s[i+k-1]='#';
				i+=k;
			}
			else
			{
				s[i+k]='#';
				i+=k+1;
			}
			r=p=i+1;
			ans++;
		}
	}
//	for(int i=0;i<n;i++) cout<<a[i];
	cout<<ans;
}