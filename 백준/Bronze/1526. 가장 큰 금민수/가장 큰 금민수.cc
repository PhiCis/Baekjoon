#include<bits/stdc++.h>
using namespace std;

bool f(int n)
{
	while(n)
	{
		if(n%10!=4 && n%10!=7) return false;
		n/=10;
	}
	return true;
}

int main()
{
	int n;
	scanf("%d", &n);
	while(1)
	{
		if(f(n))
		{
			printf("%d", n);
			return 0;
		}
		n--;
	}
}