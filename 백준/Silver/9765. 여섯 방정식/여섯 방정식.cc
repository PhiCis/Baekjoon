#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c1, c2, c3, c4, c5, c6;
ll x1, x2, x3, x5, x6, x7;

int main()
{
	cin>>c1>>c2>>c3>>c4>>c5>>c6;
	for(ll i=2;i*i<=c1;i++)
	{
		if(c1%i==0)
		{
			x1=i;
			x2=c1/i;
			if(c5%x1==0)
			{
				swap(x1, x2);
			}
			x3=c5/x2;
		}
	}
	for(ll i=2;i*i<=c6;i++)
	{
		if(c6%i==0)
		{
			x5=i;
			x6=c6/i;
			if(c3%x5==0)
			{
				swap(x5, x6);
			}
			x7=c3/x6;
		}
	}
	cout<<x1<<" "<<x2<<" "<<x3<<" "<<x5<<" "<<x6<<" "<<x7;
}