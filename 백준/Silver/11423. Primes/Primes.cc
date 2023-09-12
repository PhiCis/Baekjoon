#include<bits/stdc++.h>
using namespace std;
int p[10000001], s[10000001], a, b;
main()
{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
	p[2]=1;
	for(int i=3;i<=10000000;i+=2) p[i]=1;
	for(int i=3;i*i<=10000000;i+=2)
		for(int j=i*i;j<=10000000;j+=2*i) p[j]=0;
	for(int i=1;i<=10000000;i++) s[i]=s[i-1]+p[i];
	while(cin>>a>>b)
	{
		cout<<s[b]-s[a-1]<<"\n\n";
	}
}