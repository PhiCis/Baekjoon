#include<bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
	while(1)
	{
		cin>>a>>b;
		if(a==-1) return 0;
		cout<<a<<"+"<<b;
		if(a==1||b==1) cout<<"=";
		else cout<<"!=";
		cout<<a+b<<"\n";
	}
}