#include<bits/stdc++.h>
using namespace std;

int n, a[200020], b[200020], ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]==1&&b[i]==1) ans++;
		if(a[i]==-1&&b[i]==-1) ans++;
		if(a[i]==a[i-1] && a[i]!=0) ans++;
		if(b[i]==b[i-1] && b[i]!=0) ans++;
	}
	cout<<ans;
}