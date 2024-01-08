#include<bits/stdc++.h>
using namespace std;

int t;
double a, b, c;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		b+=c/60;
		a+=b/60;
		c=c*6;
		b=b*6;
		a=a*30;
		if(a>b) swap(a, b);
		if(a>c) swap(a, c);
		if(b>c) swap(b, c);
		cout.precision(10);
		cout<<min({b-a, c-b, a+360-c})<<"\n";
	}
}