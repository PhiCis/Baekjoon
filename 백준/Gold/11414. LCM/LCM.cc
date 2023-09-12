#include<bits/stdc++.h>
using namespace std;

long long a, b, c;
long long ans=9e18, ansi;
vector<long long> v;

int main()
{
	cin>>a>>b;
	if(a==b)
	{
		cout<<1;
		return 0;
	}
	c=abs(a-b);
	for(long long i=1;i*i<=c;i++)
	{
		if(c%i==0)
		{
			v.push_back(a/i*i+i-a);
			v.push_back(a/(c/i)*(c/i)+(c/i)-a);
		}
	}
	sort(v.begin(), v.end());
	for(auto i:v)
	{
//		cout<<i<<" ";
		if((a+i)/__gcd(a+i, b+i)*(b+i)<ans)
		{
			ans=(a+i)/__gcd(a+i, b+i)*(b+i);
			ansi=i;
		}
		
	}
	cout<<ansi;
}