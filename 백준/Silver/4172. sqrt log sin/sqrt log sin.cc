#include<bits/stdc++.h>
using namespace std;

int n;
int f[1000010];

int main()
{
	f[0]=1;
	for(double i=1;i<=1000000;i++)
	{
		f[(int)i]=f[(int)(i-sqrt(i))]+f[(int)(log(i))]+f[(int)(i*sin(i)*sin(i))];
		f[(int)i]%=1000000;
	}
	while(1)
	{
		scanf("%d", &n);
		if(n==-1) return 0;
		printf("%d\n", f[n]);
	}
}