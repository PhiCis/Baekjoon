#include<bits/stdc++.h>
using namespace std;

int n, k, cnt;
string s;

int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(cnt+s.size()<=k)
		{
			if(cnt) cout<<" ";
			cout<<s;
			cnt+=s.size();
		}
		else
		{
			cout<<"\n";
			cnt=s.size();
			cout<<s;
		}
	}
}