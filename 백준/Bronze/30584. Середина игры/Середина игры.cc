#include<bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
	cin>>a>>b;
	if((a+b)%2==1) cout<<"Error";
	else if(a>=2&&b>=2) cout<<"Undefined";
	else
	{
		if(a==0) cout<<"0\n"<<b/2<<"\n"<<"0\n";
		else if(a==1) cout<<"0\n"<<b/2<<"\n"<<"1\n";
		else if(b==0) cout<<a/2<<"\n0\n"<<"0\n";
		else if(b==1) cout<<a/2<<"\n0\n"<<"1\n";
	}
}