#include<bits/stdc++.h>
using namespace std;

int chk[10010];
int main()
{
	while(1)
	{
		for(int i=0;i<10000;i++)
		{
			chk[i]=0;
		}
		int n, ans=0;
		scanf("%d", &n);
		if(n==0) return 0;
		while(chk[n]==0)
		{
			chk[n]=1;
			n=n*n/100%10000;
		}
		for(int i=0;i<10000;i++)
		{
			if(chk[i]) ans++;
		}
		printf("%d\n", ans);
	}
}