#include<bits/stdc++.h>
using namespace std;

int t;
int a, b;
string s;
int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>s>>a>>b;
		int ans=0;
		a--, b--;
		for(int i=a;i<=b;i++) ans+=(s[i%s.size()]=='B');
		printf("Case #%d: %d\n", x, ans);
	}
}