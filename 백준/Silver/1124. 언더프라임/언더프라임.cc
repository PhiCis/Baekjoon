#include<bits/stdc++.h>
using namespace std;

bool f(int a)
{
	if(a==1) return false;
	if(a==2) return true;
	if(a%2==0) return false;
	for(int i=3;i*i<=a;i+=2)
	{
		if(a%i==0) return false;
	}
	return true;
}

int g(int a)
{
	if(a==2) return 1;
	int ret = 0;
	while(a%2==0)
	{
		ret++;
		a>>=1;
	}
	for(int i=3;i*i<=a;i+=2)
	{
		while(a%i==0)
		{
			ret++;
			a/=i;
		}
	}
	if(a!=1) ret++;
	return ret;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int ans = 0;
	for(int i=a;i<=b;i++)
	{
//		printf("%d ", g(i));
		if(f(g(i))) ans++;
	}
	printf("%d", ans);
}