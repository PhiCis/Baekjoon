#include<bits/stdc++.h>
using namespace std;

int n, c, s[1001];

int main()
{
	for(int i=1;i<=1000;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(__gcd(i, j)==1) s[i]++;
			if(__gcd(j, i)==1) s[i]++;
		}
		if(__gcd(i, i)==1) s[i]++;
		s[i]+=s[i-1];
	}
	scanf("%d", &c);
	while(c--)
	{
		scanf("%d", &n);
		printf("%d\n", s[n]);
	}
}