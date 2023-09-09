#include<bits/stdc++.h>
using namespace std;

int n;
string s[10010];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		ans+=s[i].size();
	}
	for(int i=2;i<=n;i++)
	{
		string a=s[i-1], b=s[i];
		int tmp=0;
		for(int j=0;j<min(a.size(), b.size());j++)
		{
			if(a[j]==b[j]) tmp++;
			else break;
		}
		ans-=(tmp-1);
	}
	cout<<ans;
}