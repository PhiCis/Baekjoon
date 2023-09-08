#include<bits/stdc++.h>
using namespace std;

int n, p;
map<int, int> m;

int f(int n)
{
	int res = 0;
	while(n)
	{
		int tmp = 1;
		for(int i=1;i<=p;i++)
		{
			tmp*=n%10;
		}
		res+=tmp;
		n/=10;
	}
	return res;
}

int main()
{
	scanf("%d%d", &n, &p);
	m[n]=1;
	int cnt=1;
	while(1)
	{
		n=f(n);
		if(m[n])
		{
			printf("%d", m[n]-1);
			return 0;
		}
		m[n]=++cnt;
	}
}