#include<bits/stdc++.h>
using namespace std;

int n;
int c[100010];
int ans, a;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a<=n) c[a]++;
	}
	for(int i=1;i<=n;i++) if(c[i]) ans++;
	cout<<ans;
}