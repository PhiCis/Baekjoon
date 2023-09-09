#include<bits/stdc++.h>
using namespace std;

int main()
{
	int ans;
	scanf("%d", &ans);
	while(1)
	{
		char c;
		int n;
		scanf(" %c", &c);
		if(c=='=')
		{
			printf("%d", ans);
			return 0;
		}
		scanf("%d", &n);
		if(c=='+') ans+=n;
		if(c=='-') ans-=n;
		if(c=='*') ans*=n;
		if(c=='/') ans/=n;
	}
}