#include<bits/stdc++.h>
using namespace std;

int a, b;

string f(int b)
{
	return (b<0?"("+to_string(b)+")":to_string(b));
}

int main()
{
	cin>>a>>b;
	if(a+b>a-b&&a+b>a*b)
	{
		cout<<f(a)<<"+"<<f(b)<<"="<<f(a+b);
	}
	else if(a-b>a+b&&a-b>a*b)
	{
		cout<<f(a)<<"-"<<f(b)<<"="<<f(a-b);
	}
	else if(a*b>a-b&&a*b>a+b)
	{
		cout<<f(a)<<"*"<<f(b)<<"="<<f(a*b);
	}
	else cout<<"NIE";
}