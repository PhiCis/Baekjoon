#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b, c, d, e, f, g;
	cin>>a;cin>>b;
	int N = a.size();
	c.resize(N);
	d.resize(N);
	e.resize(N);
	f.resize(N);
	g.resize(N);
	for(int i=0;i<N;i++)
	{
		if(a[i]=='1'&&b[i]=='1') c[i]='1';
		else c[i]='0';
		if(a[i]=='1'||b[i]=='1') d[i]='1';
		else d[i]='0';
		if(a[i]!=b[i]) e[i]='1';
		else e[i]='0';
		if(a[i]=='0') f[i]='1';
		else f[i]='0';
		if(b[i]=='0') g[i]='1';
		else g[i]='0';
	}
	cout<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g;
}