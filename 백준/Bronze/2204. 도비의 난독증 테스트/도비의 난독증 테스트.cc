#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
	string c=a, d=b;
	for(int i=0;i<a.size();i++) if(c[i]>='a') c[i]=c[i]-'a'+'A';
	for(int i=0;i<b.size();i++) if(d[i]>='a') d[i]=d[i]-'a'+'A';
	return c<d;
}

string s[1010];

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(!n) return 0;
		for(int i=1;i<=n;i++) cin>>s[i];
		sort(s+1, s+1+n, cmp);
		cout<<s[1]<<"\n";
	}
}