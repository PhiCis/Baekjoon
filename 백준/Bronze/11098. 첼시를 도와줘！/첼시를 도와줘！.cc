#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int ansi=0;
		string ans;
		for(int i=1;i<=n;i++)
		{
			int a;
			string b;
			cin>>a>>b;
			if(a>ansi)
			{
				ansi = a;
				ans = b;
			}
		}
		cout<<ans<<'\n';
	}
}