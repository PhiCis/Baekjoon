#include<bits/stdc++.h>
using namespace std;

int f[1000010], n;
int main()
{
	f[0]=0, f[1]=1;
	for(int i=2;i<=1000000;i++)
	{
		f[i]=(f[i-1]+f[i-2])%1000000000;
	}
	scanf("%d", &n);
	if(n==0) printf("0");
	else if(n<0&&(!(abs(n)&1))) printf("-1");
	else printf("1");
	printf("\n");
	printf("%d", f[abs(n)]);
}