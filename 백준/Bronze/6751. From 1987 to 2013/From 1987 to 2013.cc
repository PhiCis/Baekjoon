#include<bits/stdc++.h>
using namespace std;

bool f(int n)
{
	vector<int> c(10, 0);
	while(n)
	{
		c[n%10]++;
		n/=10;
	}
	for(int i=0;i<10;i++)
	{
		if(c[i]>=2) return false;
	}
	return true;
}

int n;

int main()
{
	cin>>n;
	n++;
	while(1)
	{
		if(f(n))
		{
			cout<<n;
			return 0;
		}
		n++;
	}
}