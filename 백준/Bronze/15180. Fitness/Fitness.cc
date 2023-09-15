#include<bits/stdc++.h>
using namespace std;

int a;
char b;
int c;
map<int, int> m;
int main()
{
	cin>>a;
	a--;
	m[a]++;
	cout<<a+1<<" ";
	while(cin>>b)
	{
		if(b=='#') break;
		cin>>c;
		if(b=='A') a=(a-c+8)%8;
		else a=(a+c)%8;
		m[a]++;
		cout<<a+1<<" ";
	}
	if(m.size()<5) cout<<"reject";
	else
	{
		for(auto it=m.begin();it!=m.end();it++)
		{
			if(it->second>1)
			{
				cout<<"reject";
				return 0;
			}
		}
	}
}