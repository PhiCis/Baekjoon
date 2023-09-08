#include<bits/stdc++.h>
using namespace std;

int a[1000010];
int n, cnt=1;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int c;
		cin>>c;
		if(c<=1000000) a[c]=1;
	}
	while(1)
	{
		if(!a[cnt])
		{
			cout<<cnt;
			return 0;
		}
		cnt++;
	}
}