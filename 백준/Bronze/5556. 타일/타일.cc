#include<bits/stdc++.h>
using namespace std;
int n, k, a, b;
main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>a>>b;
		int tmp=min({a, b, n+1-a, n+1-b});
		cout<<(tmp-1)%3+1<<"\n";
	}
}