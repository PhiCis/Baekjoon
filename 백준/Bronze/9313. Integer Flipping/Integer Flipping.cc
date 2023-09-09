#include<bits/stdc++.h>
using namespace std;

long long n, ans;

int main()
{
	while(1)
	{
		cin>>n;
		ans=0;
		if(n==-1) return 0;
		for(int i=0;i<32;i++)
		{
			if((n>>i)&1) ans|=(1ll<<(31-i));
		}
		cout<<ans<<"\n";
	}
}