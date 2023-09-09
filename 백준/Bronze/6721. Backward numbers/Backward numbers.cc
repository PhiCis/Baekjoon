#include<bits/stdc++.h>
using namespace std;

int n, m, t;
int f(int n)
{
	int ret = 0;
	while(n)
	{
		ret*=10;
		ret+=n%10;
		n/=10;
	}
	return ret;
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cout<<f(f(n)+f(m))<<"\n";
	}
}