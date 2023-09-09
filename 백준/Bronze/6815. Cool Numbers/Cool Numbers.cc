#include<bits/stdc++.h>
using namespace std;

int main()
{
	int ans=0;
	int a, b;
	cin>>a>>b;
	for(int i=1;i<=22;i++)
	{
		if(i*i*i*i*i*i>=a&&i*i*i*i*i*i<=b) ans++;
	}
	cout<<ans;
}