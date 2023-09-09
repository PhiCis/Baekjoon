#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c, ans=0;
	cin>>n;
	n--;
	while(n--)
	{
		cin>>a>>b>>c;
		ans+=c;
	}
	cout<<ans%2;
}