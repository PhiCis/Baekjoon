#include<bits/stdc++.h>
using namespace std;

int a, b, c, s, e, m[110], ans;

int main()
{
	scanf("%d%d%d", &a, &b, &c);
	for(int i=1;i<=3;i++)
	{
		scanf("%d%d", &s, &e);
		for(int j=s;j<e;j++)
		{
			m[j]++;
		}
	}
	for(int i=1;i<=100;i++)
	{
		if(m[i]==1) ans+=a;
		if(m[i]==2) ans+=2*b;
		if(m[i]==3) ans+=3*c;
	}
	printf("%d", ans);
}