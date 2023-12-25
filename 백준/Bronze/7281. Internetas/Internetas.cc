#include<bits/stdc++.h>
using namespace std;

int n, a, b, tmp, ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(i==1) tmp=a;
		else
		{
			if(b==1)
			{
				ans=max(ans, a-tmp);
				tmp=a;
			}
		}
	}
	cout<<ans;
}