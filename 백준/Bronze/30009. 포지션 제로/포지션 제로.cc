#include<bits/stdc++.h>
using namespace std;

int n, x, y, r, k;
int ans1, ans2;
int main()
{
	cin>>n>>x>>y>>r;
	while(n--)
	{
		cin>>k;
		if(k==x-r||k==x+r) ans2++;
		if(x-r<k&&k<x+r) ans1++;
	}
	cout<<ans1<<" "<<ans2;
}