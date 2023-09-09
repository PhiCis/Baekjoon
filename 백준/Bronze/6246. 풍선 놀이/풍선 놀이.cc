#include<bits/stdc++.h>
using namespace std;

int n, m, a, b, ans[10010], ANS;

int main()
{
	cin>>n>>m;
	while(m--)
	{
		cin>>a>>b;
		while(a<=n)
		{
			ans[a]=1;
			a+=b;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(ans[i]==0) ANS++;
	}
	cout<<ANS;
}