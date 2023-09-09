#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(b==1)
		{
			printf("%d %d\n", a, 1);
		}
		int cnt=0;
		int c=1, d=1;
		while(1)
		{
			int tmp=c;
			c=(c+d)%b;
			d=tmp;
			cnt++;
			if(c==1&&d==1)
			{
				break;
			}
		}
		printf("%d %d\n", a, cnt);
	}
}