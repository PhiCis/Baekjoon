#include<bits/stdc++.h>
using namespace std;

int t, n, m, a[110];
main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"Data Set "<<i<<":\n";
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i];
		int MM=0, mm=2e9;
		for(int i=m;i<=n;i++)
		{
			int tmp=0;
			for(int j=i-m+1;j<=i;j++) tmp+=a[j];
			MM=max(MM, tmp/m);
			mm=min(mm, tmp/m);
		}
		cout<<MM-mm<<"\n\n";
	}
}