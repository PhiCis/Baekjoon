#include<bits/stdc++.h>
using namespace std;

int t, x, ans;
int f[30];
int a[30];

int main()
{
	f[1]=1, f[2]=2;
	for(int i=3;i<30;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	scanf("%d", &t);
	while(t--)
	{
		ans=0;
		scanf("%d", &x);
		for(int i=29;i>=1;i--)
		{
			a[i]=x/f[i];
			x%=f[i];
		}
		for(int i=1;i<30;i++)
		{
			a[i-1]=a[i];
		}
		a[29]=0;
		for(int i=29;i>=1;i--)
		{
			ans+=a[i]*f[i];
		}
		printf("%d\n", ans);
	}
}