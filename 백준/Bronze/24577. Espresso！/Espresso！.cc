#include<bits/stdc++.h>
using namespace std;

int n, k, t;
string s;
int main()
{
	int ans=0;
	cin>>n>>t;
	k=t;
	while(n--)
	{
		cin>>s;
		int tmp;
		if(s.size()==2) tmp=s[0]-'0'+1;
		else tmp=s[0]-'0';
		if(k>=tmp) k-=tmp;
		else
		{
			k=t;
			ans++;
			k-=tmp;
		}
	}
	cout<<ans;
}