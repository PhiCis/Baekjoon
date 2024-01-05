#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, q, b, c, d, k;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>q;
	while(q--)
	{
		cin>>k;
		if(k==1)
		{
			cin>>b>>c>>d;
			int ans=0;
			for(int i=b;i<=c;i++) if(a[i]==d) ans++;
			cout<<ans<<"\n";
		}
		else
		{
			cin>>b>>c;
			for(int i=b;i<=c;i++) a[i]=0;
		}
	}
}