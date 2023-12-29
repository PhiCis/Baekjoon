#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e;

int main()
{
	cin>>a>>b>>c>>d>>e;
	if(b==d) cout<<a+b*e<<" "<<b<<"\n"<<c+d*e<<" "<<d;
	else
	{
		double t = (double)(a-c)/(d-b);
		if(0<t&&t<e)
		{
			cout<<c+d*e<<" "<<d<<"\n"<<a+b*e<<" "<<b;
		}
		else
		{
			cout<<a+b*e<<" "<<b<<"\n"<<c+d*e<<" "<<d;
		}
	}
}