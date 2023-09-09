#include<bits/stdc++.h>
using namespace std;
int p[100001], n;
main()
{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
	p[2]=1;
	for(int i=3;i<=100000;i+=2) p[i]=1;
	for(int i=3;i*i<=100000;i+=2)
		for(int j=i*i;j<=100000;j+=2*i) p[j]=0;
	while(cin>>n)
	{
		if(!n) return 0;
		int ans=0;
		for(int i=2;i*2<=n;i++)
		{
			if(p[i]&p[n-i]) ans++;
		}
		cout<<ans<<"\n";
	}
}