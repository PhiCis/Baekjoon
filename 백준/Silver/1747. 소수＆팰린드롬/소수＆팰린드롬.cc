#include<bits/stdc++.h>
using namespace std;

int rev(int n)
{
	int ret = 0;
	while(n)
	{
		ret*=10;
		ret+=n%10;
		n/=10;
	}
	return ret;
}

bool f(int n)
{
	return n==rev(n);
}

bool g(int n)
{
	if(n==1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0) return false;
	}
	return true;
}

int main()
{
	int n;
	scanf("%d", &n);
	while(1)
	{
		if(f(n)&&g(n))
		{
			printf("%d", n);
			return 0;
		}
		n++;
	}
}