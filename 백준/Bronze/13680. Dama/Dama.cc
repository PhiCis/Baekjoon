#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a, b, c, d;
	while(cin>>a>>b>>c>>d)
	{
		if(a==0) return 0;
		if(a==c&&b==d) cout<<0<<"\n";
		else if(a==c||b==d||a+b==c+d||a-b==c-d) cout<<1<<"\n";
		else cout<<2<<"\n";
	}
}