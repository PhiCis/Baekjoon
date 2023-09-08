#include<bits/stdc++.h>
using namespace std;

int n, a, b;

int main()
{
	cin>>n;
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	cin>>a>>b;
	if((a==1||a==n)&&(b==1||b==n)) cout<<2;
	else if(a==1||a==n||b==1||b==n) cout<<3;
	else cout<<4;
}