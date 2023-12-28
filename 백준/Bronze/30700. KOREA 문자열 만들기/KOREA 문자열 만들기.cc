#include<bits/stdc++.h>
using namespace std;

int ans;
string s="KOREA", t;
int main()
{
	cin>>t;
	for(int i=0;i<t.size();i++)
	{
		if(t[i]==s[ans%5])
		{
			ans++;
		}
	}
	cout<<ans;
}