#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
	cin>>s;
	int sz = s.size();
	int ans = 10;
	for(int i=1;i<sz;i++)
	{
		if(s[i]==s[i-1]) ans+=5;
		else ans+=10;
	}
	printf("%d", ans);
}