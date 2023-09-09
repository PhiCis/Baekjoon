#include<bits/stdc++.h>
using namespace std;

long long a, b, c, d;

int main()
{
	while(1)
	{
		cin>>a>>b>>c>>d;
		if(a==-1) return 0;
		cout<<a<<"*"<<c<<"/"<<b<<"+"<<d<<"=";
		long long tmp=a*c+d;
		long long ttmp=1;
		while(ttmp<tmp) ttmp*=2;
		cout<<a*b*(b-1)/2+ttmp-1<<"+"<<ttmp-tmp<<"\n";
	}
}