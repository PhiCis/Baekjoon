#include<bits/stdc++.h>
using namespace std;

int n, m, k, b;
string s, a;
main()
{
	while(1)
	{
		cin>>s;
		if(s=="#") return 0;
		cin>>n>>m>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>a>>b;
			if(a=="S") m=max(0, m-b);
			else m=min(n, m+b);
		}
		cout<<s<<" "<<m<<"\n";
	}
}