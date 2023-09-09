#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		int a, b;
		string s;
		scanf("%d", &a);
		cin>>s;
		scanf("%d", &b);
		if(s=="E") return 0;
		printf("Case %d: ", cnt);
		if(s==">")
		{
			printf(a>b?"true\n":"false\n");
		}
		if(s==">=")
		{
			printf(a>=b?"true\n":"false\n");
		}
		if(s=="<")
		{
			printf(a<b?"true\n":"false\n");
		}
		if(s=="<=")
		{
			printf(a<=b?"true\n":"false\n");
		}
		if(s=="==")
		{
			printf(a==b?"true\n":"false\n");
		}
		if(s=="!=")
		{
			printf(a!=b?"true\n":"false\n");
		}
	}
}