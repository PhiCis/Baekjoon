#include<bits/stdc++.h>
using namespace std;

int n, m, cnt, a, tmp;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(tmp+a<=m)
		{
			tmp+=a;
			cout<<cnt<<"\n";
		}
		else
		{
			tmp=a;
			cnt++;
			cout<<cnt<<"\n";
		}
	}
}