#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, n, c, d, mia, mib, m=1e9;
	scanf("%d%d", &a, &b);
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &c, &d);
		if(m>abs(a-c)+abs(b-d))
		{
			m=abs(a-c)+abs(b-d);
			mia=c;
			mib=d;
		}
	}
	printf("%d %d", mia, mib);
}
