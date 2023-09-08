#include<bits/stdc++.h>
using namespace std;

int n, m, j;
int a[30];
int ans;

int main()
{
	scanf("%d%d%d", &n, &m, &j);
	int s=1, e=m;
	for(int i=1;i<=j;i++)
	{
		scanf("%d", &a[i]);
		if(s<=a[i]&&a[i]<=e) continue;
		if(s>a[i])
		{
			int tmp=s-a[i];
			ans+=tmp;
			s-=tmp, e-=tmp;
		}
		else
		{
			int tmp=a[i]-e;
			ans+=tmp;
			s+=tmp, e+=tmp;
		}
	}
	printf("%d", ans);
}