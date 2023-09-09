#include<bits/stdc++.h>
using namespace std;

long long ans;
long long tmp;
long long n;

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		char c;
		scanf(" %c", &c);
		if(c>='0'&&c<='9')
		{
			tmp*=10;
			tmp+=c-'0';
		}
		else
		{
			ans+=tmp;
			tmp=0;
		}
	}
	printf("%lld", ans+tmp);
}