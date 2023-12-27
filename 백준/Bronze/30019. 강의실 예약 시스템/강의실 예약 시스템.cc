#include<bits/stdc++.h>
using namespace std;

int a[200020];
int n, m;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int b, c, d;
		cin>>b>>c>>d;
		if(a[b]<=c)
		{
			cout<<"YES\n";
			a[b]=d;
		}
		else
		{
			cout<<"NO\n";
		}
	}
}