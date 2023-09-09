#include<bits/stdc++.h>
using namespace std;

long long a, b, ans;

int main()
{
	cin>>a>>b;
	for(int i=0;i<32;i++)
	{
		if(i&1) ans+=(((a>>(i/2))&1)<<i);
		else ans+=(((b>>(i/2))&1)<<i);
	}
	cout<<ans;
}