#include<bits/stdc++.h>
using namespace std;

int f(int k)
{
	int res = 1;
	while(k)
	{
		res*=k%10;
		k/=10;
	}
	return res;
}

int main()
{
	int n;
	int cnt = 0;
	scanf("%d", &n);
	while(n>=10)
	{
		n=f(n);
		cnt++;
	}
	printf("%d", cnt);
}