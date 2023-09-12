#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, l, u;
	scanf("%d", &n);
	while(n--)
	{
		int ANS=0;
		scanf("%d%d", &l, &u);
		for(int i=l;i<=u;i++)
		{
			int ans=1;
			int tmp=i;
			for(int i=2;i*i<=tmp;i++)
			{
				int cnt=1;
				while(tmp%i==0)
				{
					cnt++;
					tmp/=i;
				}
				ans*=cnt;
			}
			if(tmp!=1) ans*=2;
			ANS=max(ANS, ans);
		}
		printf("%d\n", ANS);
	}
}