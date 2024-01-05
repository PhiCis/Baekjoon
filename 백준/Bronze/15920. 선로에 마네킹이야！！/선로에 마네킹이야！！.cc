#include<bits/stdc++.h>
using namespace std;

int n;
char c;
int d=1, cnt=5, ans;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		if(d==1)
		{
			if(c=='P')
			{
				if(cnt==1) cnt=5;
				else cnt=1;
			}
			else
			{
				d=2;
			}
		}
		else if(d==2)
		{
			if(c=='P')
			{
				cnt=6;
			}
			else
			{
				d=3;
				ans+=cnt;
			}
		}
	}
	cout<<ans;
}