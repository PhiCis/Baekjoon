#include<bits/stdc++.h>
using namespace std;

int t, a, b, s, cnt;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		s=0, cnt=0;
		scanf("%d", &a);
		for(int i=1;i<=6;i++)
		{
			scanf("%d", &b);
			s+=b;
		}
		while(1)
		{
			cnt++;
			if(a<s)
			{
				printf("%d\n", cnt);
				break;
			}
			s*=4;
		}
	}
}