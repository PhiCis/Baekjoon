#include<bits/stdc++.h>
using namespace std;

long long n, ans;

int main()
{
	cin>>n;
	n--;
	ans++;
	while(n)
	{
		ans++;
		n/=2;
	}
	cout<<ans;
}