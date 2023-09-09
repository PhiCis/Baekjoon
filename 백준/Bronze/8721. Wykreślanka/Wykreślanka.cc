#include<bits/stdc++.h>
using namespace std;

int a, cnt=1, ans, n;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a==cnt)
		{
			cnt++;
		}
		else
		{
			ans++;
		}
	}
	cout<<ans;
}