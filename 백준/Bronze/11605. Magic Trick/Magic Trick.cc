#include<bits/stdc++.h>
using namespace std;

int n;
string a[110];
int b[110];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=100;i++)
	{
		int tmp=i;
		for(int j=1;j<=n;j++)
		{
			if(a[j][0]=='A') tmp+=b[j];
			if(a[j][0]=='S')
			{
				if(tmp-b[j]<0)
				{
					ans++;
					break;
				}
				else tmp-=b[j];
			}
			if(a[j][0]=='M') tmp*=b[j];
			if(a[j][0]=='D')
			{
				if(tmp%b[j]!=0)
				{
					ans++;
					break;
				}
				else tmp/=b[j];
			}
		}
	}
	cout<<ans;
}