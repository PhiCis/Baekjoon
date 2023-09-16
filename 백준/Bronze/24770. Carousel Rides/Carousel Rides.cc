#include<bits/stdc++.h>
using namespace std;
int n, k, a, b;
int main()
{
	while(cin>>n>>k)
	{
		if(!n) return 0;
		long long tmpa=1, tmpb=2e9;
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			if(a<=k && tmpa*b<tmpb*a) tmpa=a, tmpb=b;
			else if(a<=k && tmpa*b==tmpb*a && a>tmpa) tmpa=a, tmpb=b;
		}
		if(tmpb!=2e9) cout<<"Buy "<<tmpa<<" tickets for $"<<tmpb<<"\n";
		else cout<<"No suitable tickets offered\n";
	}
}