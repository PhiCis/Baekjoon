#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long a[3], d;
	long long ans;
	cin>>n;
	while(n--)
	{
		cin>>a[0]>>a[1]>>a[2]>>d;
		ans=a[0]*a[1]*a[2];
		for(int i=1;i<=d;i++)
		{
			sort(a, a+3);
			ans-=a[0]*a[1];
			a[2]--;
		}
		cout<<ans<<"\n";
	}
}