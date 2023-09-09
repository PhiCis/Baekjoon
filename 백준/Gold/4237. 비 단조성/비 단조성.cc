#include<bits/stdc++.h>
using namespace std;

int t, n, a[30030];

int main()
{
	cin>>t;
	while(t--)
	{
		int cnt = 1, ans = 1;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=2;i<=n;i++)
		{
			if(cnt==1 && a[i]<a[i-1])
			{
				ans++;
				cnt=-1;
			}
			else if(cnt==-1 && a[i]>a[i-1])
			{
				ans++;
				cnt=1;
			}
		}
		cout<<ans<<"\n";
	}
}