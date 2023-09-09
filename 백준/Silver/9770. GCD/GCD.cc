#include<bits/stdc++.h>
using namespace std;

int a, b[110], cnt, ans;

int main()
{
	while(cin>>a)
	{
		if(a==0) break;
		b[cnt++]=a;
	}
	for(int i=0;i<cnt;i++)
	{
		for(int j=i+1;j<cnt;j++)
		{
			ans=max(ans, __gcd(b[i], b[j]));
		}
	}
	cout<<ans;
}