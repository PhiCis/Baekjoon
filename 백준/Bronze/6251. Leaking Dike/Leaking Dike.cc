#include<bits/stdc++.h>
using namespace std;

int n, a[10010], k;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	while(cin>>n)
	{
		if(!n) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int ans=0;
		a[0]=2e9, a[n+1]=2e9;
		cin>>k;
		int l=k-1, r=k+1;
		while(a[l]<=a[k]) l--;
		while(a[r]<=a[k]) r++;
		for(int i=l+1;i<r;i++) ans+=a[k]+1-a[i];
		cout<<ans<<"\n";
	}
}