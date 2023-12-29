#include<bits/stdc++.h>
using namespace std;

int n, ans;

int main()
{
	cin>>n;
	while(n)
	{
		ans*=256;
		ans+=n%256;
		n/=256;
	}
	cout<<ans;
}