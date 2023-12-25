#include<bits/stdc++.h>
using namespace std;

int n, a[1010], s;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	sort(a+1, a+n+1);
	if(s%2==0) cout<<s/2;
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]&1)
			{
				cout<<(s-a[i])/2;
				return 0;
			}
		}
	}
}