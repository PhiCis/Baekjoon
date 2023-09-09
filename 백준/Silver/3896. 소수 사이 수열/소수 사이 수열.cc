#include<bits/stdc++.h>
using namespace std;

int p[1300000];
int t;

int main()
{
	scanf("%d", &t);
	p[2]=1;
	for(int i=3;i<=1299709;i+=2) p[i]=1;
	for(int i=3;i*i<=1299709;i+=2)
		for(int j=i*i;j<=1299709;j+=2*i)
			p[j]=0;
	while(t--)
	{
		int n;
		scanf("%d", &n);
		if(p[n]) printf("0\n");
		else
		{
			int cnt=2;
			int tmp=n;
			while(p[tmp+1]==0)
			{
				tmp++;
				cnt++;
			}
			tmp=n;
			while(p[tmp-1]==0)
			{
				tmp--;
				cnt++;
			}
			printf("%d\n", cnt);
		}
	}
}