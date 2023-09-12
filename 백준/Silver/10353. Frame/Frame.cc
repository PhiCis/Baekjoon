#include<bits/stdc++.h>
using namespace std;

int n, x, y, a;

int main()
{
	cin>>x>>y>>n;
	while(n--)
	{
		cin>>a;
		if((x-2)%a==0&&y%a==0) cout<<"YES\n";
		else if((y-2)%a==0&&x%a==0) cout<<"YES\n";
		else if((x-1)%a==0&&(y-1)%a==0) cout<<"YES\n";
		else if(a==2&&x*y%2==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
}