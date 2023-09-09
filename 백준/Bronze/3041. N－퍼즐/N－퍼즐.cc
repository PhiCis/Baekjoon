#include<bits/stdc++.h>
using namespace std;

pair<int, int> c[15];
int ans;
int main()
{
	char a;
	for(int i=0;i<16;i++)
	{
		cin>>a;
		if(a!='.')
		{
			c[a-'A']={i/4, i%4};
		}
	}
	for(int i=0;i<15;i++)
	{
		ans+=abs(i/4-c[i].first)+abs(i%4-c[i].second);
	}
	cout<<ans;
}