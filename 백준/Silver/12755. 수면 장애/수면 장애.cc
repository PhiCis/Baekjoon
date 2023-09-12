#include<bits/stdc++.h>
using namespace std;

int n, i;

int f(int n, int i)
{
	stack<int> s;
	while(i)
	{
		s.push(i%10);
		i/=10;
	}
	for(int j=1;j<n;j++)
	{
		s.pop();
	}
	return s.top();
}

int main()
{
	scanf("%d", &n);
	for(i=1;i<=9;i++)
	{
		if(n<=1) goto skip;
		n-=1;
	}
	for(i=10;i<=99;i++)
	{
		if(n<=2) goto skip;
		n-=2;
	}
	for(i=100;i<=999;i++)
	{
		if(n<=3) goto skip;
		n-=3;
	}
	for(i=1000;i<=9999;i++)
	{
		if(n<=4) goto skip;
		n-=4;
	}
	for(i=10000;i<=99999;i++)
	{
		if(n<=5) goto skip;
		n-=5;
	}
	for(i=100000;i<=999999;i++)
	{
		if(n<=6) goto skip;
		n-=6;
	}
	for(i=1000000;i<=9999999;i++)
	{
		if(n<=7) goto skip;
		n-=7;
	}
	for(i=10000000;i<=99999999;i++)
	{
		if(n<=8) goto skip;
		n-=8;
	}
	skip:;
	printf("%d", f(n, i));
}