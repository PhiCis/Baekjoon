#include<bits/stdc++.h>
using namespace std;

string s, t;
int n, a[2000200];
long long ans;

int main()
{
	cin>>n>>t;
	s="5";
	for(int i=0;i<t.size();i++)
	{
		if(t[i]=='1') s+="15";
		else s+="95";
	}
	n=s.size();
	
	int r=0, p=0;
	for(int i=0;i<n;i+=2)
	{
		a[i]=0;
		if(i<=r) a[i]=min(a[2*p-i], r-i);
		while(i-a[i]-1>=0&&i+a[i]+1<n&&(int)(s[i-a[i]-1]+s[i+a[i]+1])==(int)('5'+'5')) a[i]++;
		if(r<i+a[i])
		{
			r=i+a[i];
			p=i;
		}
	}
	
	for(int i=0;i<n;i+=2)
	{
		ans+=a[i]/2;
	}
	cout<<ans;
	
}