#include<bits/stdc++.h>
using namespace std;

int a, b, ans;

int main()
{
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(i+j==10) ans++;
		}
	}
	if(ans==1) cout<<"There is 1 way to get the sum 10.";
	else cout<<"There are "<<ans<<" ways to get the sum 10.";
}