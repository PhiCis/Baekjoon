#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, ans=1e18;
	cin>>n;
	for(int i=1;i<=sqrt(n)+2;i++)
	{
		ans=min(ans, 2*(i+(n-1)/i+1)-4);
	}
	cout<<max(ans, 4ll);
}