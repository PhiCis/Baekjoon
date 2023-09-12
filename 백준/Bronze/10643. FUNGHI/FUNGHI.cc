#include<bits/stdc++.h>
using namespace std;

int a[10], ans;

int main()
{
	for(int i=0;i<8;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<8;i++)
	{
		ans=max(ans, a[i]+a[(i+1)%8]+a[(i+2)%8]+a[(i+3)%8]);
	}
	cout<<ans;
}