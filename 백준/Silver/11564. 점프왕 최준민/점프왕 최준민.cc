#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long k, a, b;
	cin>>k>>a>>b;
	if(b<=0)
	{
		a*=-1;
		b*=-1;
		swap(a, b);
	}
	if(a<0)
	{
		cout<<1+b/k+(-a)/k;
	}
	else if(a==0)
	{
		cout<<1+b/k;
	}
	else
	{
		cout<<b/k-(a-1)/k;
	}
}