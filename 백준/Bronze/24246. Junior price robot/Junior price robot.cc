#include<bits/stdc++.h>
using namespace std;

int n, a[400040];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=2;i<=n;i++)
	{
		if(a[i]<=a[1])
		{
			cout<<i-1;
			return 0;
		}
	}
	cout<<"infinity";
}