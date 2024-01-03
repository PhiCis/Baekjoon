#include<bits/stdc++.h>
using namespace std;

int n, a[100010], b[100010], s[100010];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		s[a[i]]++;
		s[b[i]+1]--;
	}
	s[0]=1;
	for(int i=1;i<=100001;i++)
	{
		s[i]=s[i-1]+s[i];
		if(s[i]>=i) ans=i;
	}
	cout<<ans-1;
}