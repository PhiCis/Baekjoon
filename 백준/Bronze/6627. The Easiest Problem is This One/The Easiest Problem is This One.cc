#include<bits/stdc++.h>
using namespace std;

int n;

int f(int n)
{
	int ans=0;
	while(n)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int main()
{
	while(cin>>n)
	{
		if(!n) return 0;
		for(int i=11;;i++)
		{
			if(f(n)==f(n*i))
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
}