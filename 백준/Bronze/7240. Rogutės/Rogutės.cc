#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010], s;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
		if(s>m&&i<n) s--;
	}
	cout<<s;
}