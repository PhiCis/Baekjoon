#include<bits/stdc++.h>
using namespace std;

int t, a, b, c, d, e;
double r;

int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>b>>c>>d;
		a=a*360000+b*6000+c*100+d;
		cin>>b>>c>>d>>e;
		b=b*360000+c*6000+d*100+e;
		if(a>b) b+=4320000;
		b-=a;
		cin>>r;
		printf("%d. %.3lf\n", i, 3.1415926535*r*r*((double)b/4320000));
	}
}