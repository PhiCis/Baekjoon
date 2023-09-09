#include<bits/stdc++.h>
using namespace std;

long long tmp=1, ans=0;

int main()
{
	int n, m;
	cin>>n>>m;
	while(n&1 && m&1)
	{
		ans+=tmp;
		tmp*=4;
		n/=2, m/=2;
	}
	cout<<ans;
}