#include<bits/stdc++.h>
using namespace std;

int n, k, a[100010];
int ans;
int main()
{
	cin>>n>>k;
	a[0]=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<=a[i-1])
		{
			ans++;
			a[i]+=k;
			if(a[i]<=a[i-1])
			{
				cout<<-1;
				return 0;
			}
		}
	}
	cout<<ans;
}