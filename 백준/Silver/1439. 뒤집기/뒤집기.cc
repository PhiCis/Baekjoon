#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int ans=0;
	cin>>s;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]!=s[i+1]) ans++;
	}
	printf("%d", ans+1>>1);
}