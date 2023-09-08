#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	int ans, cnt;
	cin>>a>>b;
	ans=b.size();
	for(int i=0;i<=b.size()-a.size();i++)
	{
		cnt=0;
		for(int j=0;j<a.size();j++)
		{
			if(b[j+i]!=a[j]) cnt++;
		}
		ans=min(ans, cnt);
	}
	printf("%d", ans);
}