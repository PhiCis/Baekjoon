#include<bits/stdc++.h>
using namespace std;

int n, cnt=1, d=1;
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		int k;
		cin>>s>>k;
		if(s=="HOURGLASS" && cnt==k)
		{
			cout<<cnt<<" NO\n";
			cnt+=d;
		}
		else if(s=="HOURGLASS")
		{
			cout<<cnt<<" NO\n";
			d*=-1;
			cnt+=d;
		}
		else if(cnt==k)
		{
			cout<<cnt<<" YES\n";
			cnt+=d;
		}
		else
		{
			cout<<cnt<<" NO\n";
			cnt+=d;
		}
		if(cnt==0) cnt=12;
		if(cnt==13) cnt=1;
	}
}