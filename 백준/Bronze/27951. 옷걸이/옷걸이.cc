#include<bits/stdc++.h>
using namespace std;

int n, a[1010000], b, c;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>b>>c;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			b--;
			if(b<0)
			{
				cout<<"NO";
				return 0;
			}
		}
		if(a[i]==2)
		{
			c--;
			if(c<0)
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES\n";
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1) cout<<"U";
		if(a[i]==2) cout<<"D";
		if(a[i]==3)
		{
			if(b)
			{
				b--;
				cout<<"U";
			}
			else
			{
				c--;
				cout<<"D";
			}
		}
	}
}