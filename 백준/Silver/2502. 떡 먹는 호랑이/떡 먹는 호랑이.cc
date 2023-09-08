#include<bits/stdc++.h>
using namespace std;
int d, k;
int f[35];
int a, b;
int cnt;
int main()
{
	scanf("%d%d", &d, &k);
	f[1]=1, f[2]=1;
	for(int i=3;i<=d-1;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	a=f[d-2], b=f[d-1];
	while(1)
	{
		k-=a;
		cnt++;
		if(k%b==0)
		{
			printf("%d\n%d", cnt, k/b);
			return 0;
		}
	}
}