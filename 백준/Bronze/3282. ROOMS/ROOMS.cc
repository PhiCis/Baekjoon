#include<bits/stdc++.h>
using namespace std;

int n, k, a, tmp=1, ans[110];
bool flag;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>a;
		if(flag)
		{
			tmp=1;
			while(a)
			{
				while(ans[tmp]==2) tmp++;
				ans[tmp]++;
				a--;
				tmp++;
			}
		}
		else
		{
			while(a>=2&&tmp<=n)
			{
				a-=2;
				ans[tmp]=2;
				tmp++;
			}
			if(tmp>n)
			{
				flag=true;
				tmp=1;
				while(a)
				{
					while(ans[tmp]==2) tmp++;
					ans[tmp]++;
					a--;
					tmp++;
				}
			}
			else if(a==1)
			{
				ans[tmp]++;
				tmp++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<"\n";
	}
}