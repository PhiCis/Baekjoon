#include<bits/stdc++.h>
using namespace std;

int n;
long long m;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>m;
		int cnt=0;
		for(long long i=0;i<=60;i++)
		{
			if((m>>i)&(1ll)) cnt++;
		}
		if(cnt==2)
		{
			for(long long i=0;i<=60;i++)
			{
				if((m>>i)&(1ll)) cout<<i<<" ";
			}
			cout<<"\n";
		}
		else
		{
			for(long long i=0;i<=60;i++)
			{
				if((m>>i)&(1ll)) cout<<i-1<<" "<<i-1;
			}
			cout<<"\n";
		}
	}
}