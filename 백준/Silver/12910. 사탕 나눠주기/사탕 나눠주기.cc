#include<bits/stdc++.h>
using namespace std;

int n, c, a[100];
long long ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		a[c]++;
	}
	long long tmp=1;
	for(int i=1;i<=50;i++)
	{
		tmp*=a[i];
		ans+=tmp;
	}
	cout<<ans;
}