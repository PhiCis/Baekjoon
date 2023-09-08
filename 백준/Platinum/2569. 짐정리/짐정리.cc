#include<bits/stdc++.h>
using namespace std;
int n, m, cycmin, tmp, cnt, ans1, ans2, ans, chk[10010];
int a[10010], b[10010];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		b[i]=a[i];
	}
	sort(b+1, b+1+n);
	
	m=b[1];
	for(int i=1;i<=n;i++)
	{
		ans1=ans2=cnt=0;
		if(a[i]!=b[i]&&chk[i]==0)
		{
			chk[i]=1;
			cycmin=b[i];
			tmp=a[i];
			while(tmp!=b[i])
			{
				for(int j=1;j<=n;j++)
				{
					if(b[j]==tmp)
					{
						chk[j]=1;
						cnt++;
						ans1+=tmp;
						ans2+=tmp;
						tmp=a[j];
						break;
					}
				}
			}
			ans1+=cnt*cycmin;
			ans2+=(cycmin+m)*2+cnt*m;
			ans+=min(ans1, ans2);
		}
	}
	printf("%d", ans);
}