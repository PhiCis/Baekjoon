#include<bits/stdc++.h>
using namespace std;

int main()
{
	int ans=0;
	string a, b;
	getline(cin, a);
	getline(cin, b);
	for(int i=0;i<=a.size()-b.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			if(i+j>=a.size()||j>=b.size()) goto sskip;
			if(a[i+j]!=b[j]) goto skip;
		}
		ans++;
		i+=b.size()-1;
		skip:;
	}
	sskip:
	printf("%d", ans);
}