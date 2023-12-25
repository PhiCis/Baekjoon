#include<bits/stdc++.h>
using namespace std;

int n, ans;
string s, t;
int main()
{
	cin>>n>>s>>t;
	for(int i=0;i<n;i++)
	{
		int tmp=abs(s[i]-t[i]);
		ans+=min(tmp, 26-tmp);
	}
	cout<<ans;
}