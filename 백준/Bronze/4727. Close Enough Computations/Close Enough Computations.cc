#include<bits/stdc++.h>
using namespace std;
#define int long long

int a, b, c, d;

main()
{
	while(1)
	{
		cin>>a>>b>>c>>d;
		if(a+b+c+d==0) return 0;
		double e=(0.5+b)*9+(0.5+c)*4+(0.5+d)*4-0.001;
		double f=max(0.0, -0.5+b)*9+max(0.0, -0.5+c)*4+max(0.0, -0.5+d)*4;
		if(a>=(int)(f+0.5)&&a<=(int)(e+0.5)) cout<<"yes\n";
		else cout<<"no\n";
	}
}