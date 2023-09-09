#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a==0&&b==0) return 0;
		int cnt=0;
		while(1)
		{
			int tmp1=1, tmp2=1;
			for(int i=1;i<=b;i++)
			{
				tmp1*=cnt, tmp2*=(cnt+1);
			}
			if(tmp1<=a&&a<=tmp2)
			{
				printf("%d\n", a-tmp1<tmp2-a?cnt:cnt+1);
				break;
			}
			cnt++;
		}
	}
}