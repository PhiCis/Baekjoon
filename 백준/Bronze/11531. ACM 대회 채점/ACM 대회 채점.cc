#include<bits/stdc++.h>
using namespace std;

int n;
char c;
string s;
int ans, ans2;
map<char, int> m;

int main()
{
	while(1)
	{
		cin>>n;
		if(n==-1) break;
		cin>>c>>s;
		if(s=="wrong")
		{
			if(m[c] != -1) m[c]+=20;
		}
		else
		{
			if(m[c] == -1) continue;
			ans+=n+m[c];
			ans2++;
			m[c]=-1;
		}
	}
	cout<<ans2<<" "<<ans;
}