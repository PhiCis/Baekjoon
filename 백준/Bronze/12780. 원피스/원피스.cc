#include<bits/stdc++.h>
using namespace std;

int ans;
string a, b;

int main()
{
	cin>>a>>b;
	a+="0000000000000000";
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			if(a[i+j]!=b[j])
			{
				goto skip;
			}
		}
		ans++;
		skip:;
	}
	printf("%d", ans);
}