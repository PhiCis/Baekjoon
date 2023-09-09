#include<bits/stdc++.h>
using namespace std;

int a, b, c;
bool p[4000040];

bool f(int i, int c)
{
	while(i)
	{
		if(i%10==c) return true;
		i/=10;
	}
	return false;
}

int ans;
int main()
{
	p[2]=1;
	for(int i=3;i<=4000000;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i*i<=4000000;i+=2)
	{
		for(int j=i*i;j<=4000000;j+=2*i)
		{
			p[j]=0;
		}
	}
	scanf("%d%d%d", &a, &b, &c);
	for(int i=a;i<=b;i++)
	{
		if(p[i])
		{
			if(f(i, c)) ans++;
		}
	}
	printf("%d", ans);
}