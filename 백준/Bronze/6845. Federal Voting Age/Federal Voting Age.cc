#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		a=a*10000+b*100+c;
		if(a<=19890227) cout<<"Yes\n";
		else cout<<"No\n";
	}
}